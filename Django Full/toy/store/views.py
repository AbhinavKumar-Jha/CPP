from django.shortcuts import render,redirect
from django.http import HttpResponse
from store.models import *
# Create your views here.
def test(request):
    return HttpResponse('<h1>This is test page</h1>')
def home(request):
    return render(request,'home.html')
def about1(request):
    return render(request,'about1.html')
def home3(request):
    return render(request,'home3.html')
def home2(request):
    return render(request,'home2.html')
def home4(request):
    return render(request,'home4.html')
def index(request):
    return render(request,'index.html')
def about(request):
    return render(request,'about.html')
def add(request):
    return render(request,'add.html')
def addcode(request):
    a=int(request.GET['a1'])
    b=int(request.GET['a2'])
    c=a+b
    return render(request,'add.html',{'x':c})

def cal(request):

    a=int(request.GET['a1'])
    b=int(request.GET['a2'])
    c=a+b
    d=a-b
    e=a*b
    f=a/b
    
    #return HttpResponse(c)
    return render(request,'calculator.html',{'w':c,'x':d,'y':e,'z':f})
def calculator(request):
    return render(request,'calculator.html')

def insert(request):
    return render(request,'insert.html')

def ins(request):
    u=user()
    u.name=request.GET['a1']
    u.email=request.GET['a2']
    u.password=request.GET['a3']
    u.phnno=request.GET['a4']
    u.save()
    return render(request,'insert.html')


def login(request):
    return render(request,'login.html')

def log(request):
    a=request.GET['a1']
    b=request.GET['a2']
    if user.objects.filter(email=a,password=b):
        return render(request,'index.html')
    else:
        return render(request,'login.html')
    
def registration(request):
    return render(request,'registration.html')

def reg(request):
    u=user2()
    u.fullname=request.GET['fullname']
    u.username=request.GET['username']
    u.email=request.GET['email']
    u.password=request.GET['password']
    u.save()
    return render(request,'registration.html')
def login2(request):
    return render(request,'login2.html')
def log2(request):
    a=request.GET['username']
    b=request.GET['password']
    if user2.objects.filter(username=a,password=b):
        return render(request,'index.html')
    else:
        return render(request,'login2.html')

def animation(request):
    return render(request,'animation.html')

def reg2(request):
    u=callback()
    u.name=request.GET['name']
    u.phone=request.GET['phone']
    u.email=request.GET['email']
    u.message=request.GET['message']
    u.save()
    return render(request,'about.html')

def show(request):
    a=user.objects.all()
    return render(request,'show.html',{'x':a})

def dele(request,id):
    d=user.objects.get(id=id)
    d.delete()
    return redirect("../show")

def edit(request,id):
    d=user.objects.get(id=id)
    return render(request,'edit.html',{'x':d})

def edcode(request,id):
    d=user.objects.get(id=id)
    d.name=request.GET['a1']
    d.email=request.GET['a2']
    d.password=request.GET['a3']
    d.phnno=request.GET['a4']
    d.save()
    return redirect('../show')

def logout(request):
    return render(request, 'logout.html') 