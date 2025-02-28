from django.shortcuts import render, redirect
from django.contrib.auth import login, authenticate, logout
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth.decorators import login_required
from .models import Job
from .forms import SignUpForm, JobForm  # Ensure you create JobForm in forms.py

# Home View - Displays All Jobs
def home(request):
    jobs = Job.objects.all()
    return render(request, 'jobs/home.html', {'jobs': jobs})

# Signup View
def signup(request):
    if request.method == "POST":
        form = SignUpForm(request.POST)
        if form.is_valid():
            user = form.save()
            login(request, user)
            return redirect('home')
    else:
        form = SignUpForm()
    
    return render(request, 'jobs/signup.html', {'form': form})  # Form is always passed

# Signin (Login) View
def signin(request):
    if request.method == "POST":
        form = AuthenticationForm(request, data=request.POST)
        if form.is_valid():
            user = form.get_user()
            login(request, user)
            return redirect('home')
    else:
        form = AuthenticationForm()
    
    return render(request, 'jobs/signin.html', {'form': form})  # Pass form to handle errors

# Logout View
def logout_view(request):
    logout(request)
    return redirect('login')


# Job Posting View (Requires Login)
@login_required
def post_job(request):
    if request.method == "POST":
        form = JobForm(request.POST)  # Using Django form instead of manual field extraction
        if form.is_valid():
            form.save()
            return redirect("home")
    else:
        form = JobForm()
    
    return render(request, "jobs/post_job.html", {"form": form})

