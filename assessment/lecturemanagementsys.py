# Lecture Management System
# This program manages lecturer information using class and objects.

class Lecture:
    # Constructor to assign initial values
    def __init__(self):
        # Data members
        self.lecturer_name = ""
        self.subject_name = ""
        self.course_name = ""
        self.number_of_lectures = 0

    # Function to add lecture details
    def add_lecture_details(self):
        print("\nEnter Lecturer Details")
        self.lecturer_name = input("Enter Lecturer Name: ")
        self.subject_name = input("Enter Subject Name: ")
        self.course_name = input("Enter Course Name: ")
        self.number_of_lectures = int(input("Enter Number of Lectures: "))

    # Function to display lecture details
    def display_lecture_details(self):
        print("\n----- Lecturer Details -----")
        print("Lecturer Name      :", self.lecturer_name)
        print("Subject Name       :", self.subject_name)
        print("Course Name        :", self.course_name)
        print("Number of Lectures :", self.number_of_lectures)


# Main Program
def main():

    print("=================================")
    print("      Lecture Management System")
    print("=================================")

    lecture_list = []

    # Program should handle at least 5 lecturers
    total_lecturers = 5

    # Adding lecturer details
    for i in range(total_lecturers):
        print(f"\nEnter details for Lecturer {i+1}")
        lec = Lecture()  # object creation
        lec.add_lecture_details()
        lecture_list.append(lec)

    # Display all lecturer details
    print("\n=================================")
    print("        Lecturer Information")
    print("=================================")

    for lec in lecture_list:
        lec.display_lecture_details()


# Run the program
main()
