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
{% for student in _site.stu}
  * {{ student.image }} @{{student.user}} ({{student.name}})
  * * {{ student.content }}
{% endfor %}
