from django.db import models
from django.contrib.auth.models import User

# Job Model
class Job(models.Model):
    title = models.CharField(max_length=200)
    company = models.CharField(max_length=200)
    location = models.CharField(max_length=200)
    description = models.TextField()
    posted_on = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.title

# User Profile Model (Optional)
class UserProfile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    phone = models.CharField(max_length=15, blank=True)
    resume = models.FileField(upload_to='resumes/', blank=True)

    def __str__(self):
        return self.user.username
