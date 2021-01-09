# Attendance Management (Cpp-Project)

### Important Files for teacher's verficiation:
* student.cpp
* teacher.cpp
* admin.cpp

### Concepts used:
* Classes
* Object
* Inheritance
* Polymorphism
* Header Files
* File Handling

### Compile and Run

* Execute the following command to compile - ` g++ teacher.cpp student.cpp admin.cpp `
* To run - ` ./a.exe `

### Credentials
* Admin
  * Username - ` admin `
  * Password - ` admin `
* Teacher
  * username - ` teacher `
  * Password - ` teacher `
  
### File Structure

* **User.h**  - It is the main header file containing the  class user .
* **Teacher** 
  * **teacher_header.h**   - header file containing teacher class
  * **teacher.cpp**          - contains all functions of teacher class
* **Student**
  * **student_header.h**   - header file containing student class
  * **student.cpp**           - contains all functions of student class 
* **Admin** 
  * **admin_header.h**   - header file containing admin class 
  * **admin.cpp**            - contains all functions of admin class 
* **db.dat**  -  main database containing all registered students file name 
* **attendance.dat** -  contains all the leave application submitted by the students along with name and date.

### Features:
* Students
  * Students can see their attendance as well as the %.
  * Students can send leave application
* Admin
  * Register new students
  * See list of students along with their attendance.
  * Delete all students from database.
* Teacher 
  * Takes attendance of each student present in the class (database)

### Group Members
* Sayantan Roy
* Nikhil Swami

