from django.contrib import admin
from django.urls import path
from jobs.views import home, signup, signin, logout_view, post_job  # Only necessary imports

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name='home'),
    path('signup/', signup, name='signup'),
    path('login/', signin, name='login'),  # 'signin' function is already imported
    path('logout/', logout_view, name='logout'),
    path('post-job/', post_job, name='post_job'),
]
