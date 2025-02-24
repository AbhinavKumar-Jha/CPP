from django.db import models

# Create your models here.
class user(models.Model):
    name=models.CharField(max_length=50)
    email=models.EmailField()
    password=models.CharField(max_length=50)
    phnno=models.IntegerField()
    class Meta:
        db_table="user"

class user2(models.Model):
    fullname=models.CharField(max_length=50)
    username=models.CharField(max_length=10)
    email=models.EmailField()
    password=models.CharField(max_length=10)
    class Meta:
        db_table="user2"

class callback(models.Model):
    name=models.CharField(max_length=50)
    phone=models.IntegerField()
    email=models.EmailField()
    message=models.CharField(max_length=200)
    class Meta:
        db_table="callback"
    

    