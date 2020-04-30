# Introduction
Our team aims to create a basic and simple GitHub project, which includes:
* Initializing a new project board
* Setting up README.md
* Updating students' information under README.md
* Pushing a piece of code to the project
* Getting a workflow status badge
* Promoting the project


# Code

# Contributors
{% for student in site.stu %}
  * <img src="{{ student.image }}" style="width: 40px; height: 40px"> @{{student.user}} ({{student.name}})
    * {{ student.content }}
{% endfor %}
