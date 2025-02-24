# Generated by Django 5.1.6 on 2025-02-18 17:17

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('store', '0003_user2'),
    ]

    operations = [
        migrations.CreateModel(
            name='callback',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=50)),
                ('phone', models.IntegerField()),
                ('email', models.EmailField(max_length=254)),
                ('message', models.CharField(max_length=200)),
            ],
            options={
                'db_table': 'user3',
            },
        ),
    ]
