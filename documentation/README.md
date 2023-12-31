# WE MZEE LIBRARY MANAGEMENT SYSTEM
## SOFTWARE REQUIREMENTS SPECIFICATION
> By Barasa Michael Murunga
> 15/10/2023

## List of Abbreviations
- __LMS__: Library Management System
- __SQL__: Structured Query Language
- __SRS__: Software Requirements Specification
- __URL__: Uniform Resource Locator

## Table of Contents
1. [INTRODUCTION](#introduction)
   - Purpose
   - Scope
   - References
   - Overview of Document
2. [SYSTEM OVERVIEW](#system-overview)
   - Project Perspective
   - System Context
   - General Constraints
   - Assumptions
   - The Current Situation
3. [SYSTEM ANALYSIS](#system-analysis)
   - Overview of the Current System
   - Challenges Faced by the Current System
   - Functional Requirements
   - Non-Functional Requirements
4. [SYSTEM DESIGN](#system-design)
   - Class Diagram
   - Entity Relationship Diagram
   - Use Case Diagram
   - Functional Design

## INTRODUCTION
### Purpose
The purpose of this Library Management System SRS document is to define and document the software requirements for the development of We Mzee LMS. This document outlines what the application should do (the “what”) and provides a clear understanding of its functionality and constraints. It serves as a guide for developers, designers, testers, and other stakeholders involved in the project.

This document is intended for use by various stakeholders involved in the development and testing of the LMS. These stakeholders include, but are not limited to:
1. __Project Managers__: To understand the scope and objectives of the project.
2. __Business Analysts__: To capture and analyze the functional and non-functional requirements.
3. __Designers__: To ensure the user interface and user experience aligns with the requirements.
4. __Developers__: To implement the features and functionality described in this document.
5. __Testers__: To create test cases and verify that the application meets the specified requirements.
6. __Quality Assurance Teams__: To ensure that the application complies with the industry standards and regulations.
7. __Client or Product Owners__: To have a clear understanding of what the application will deliver.

### Scope
This document describes the software requirements of the LMS. It covers all aspects of the system, including user interactions, security, performance, and compatibility with various devices and operating systems.

Additionally, it focuses on the “what” of the LMS, not the “how.” It specifies the features, functions, and constraints but does not delve into the technical implementation details. For example, it might specify that the system should support storage of data in an SQL database but does not detail the specific database to be used.

It also serves as the foundation for the subsequent phases of the project, including the design and implementation of the system. The requirements described here will be used by the development team to create a Software Design Description (SDD) document that outlines the technical architecture and implementation details of the mobile banking application.

### Software Artefacts to Be Produced
1. __The LMS Application__: This will be available for download and installation on GitHub and will allow We Mzee Library to manage their library.
2. __User Documentation__: A comprehensive user manual will be developed to guide users on how to use the LMS effectively.
3. __System Documentation__: Detailed documentation of the application’s architecture, design, configuration will be produced to support future maintenance and enhancements.

### What the Current System Will Do
1. __Account Access__: Users will be able to login securely to their accounts using their credentials.
2. __Borrowing of books__: Rules upheld, borrowers will be able to borrow books from the library.
3. __Returning of books__: Borrowers will be able to return borrowed books to the library.
4. __Management of books and borrowers__: Administrators will be able to add, remove and deactivate borrowers and books alike.

### What the Current System Will Not Do
1. __Customer Support__: The application will not offer real-time customer support. Users can access contact information for customer support but will not engage in direct calls or chats within the application.
2. __Sending of Notifications__: The application will not offer notification services to borrowers.
3. __Direct Payment__: The application will not offer direct payment of charges via the application.

### Consistency with Other Documents
The scope described in this document aligns with the project plan, which outlines the project’s timeline, resources, and milestones. The project plan will ensure that the development of the LMS stays on track and within the scope. The requirements specified here are consistent with the project’s objectives and goals, as well as any other documents related to the project.

### References
- __Project Plan (Version 1.0)__: The project plan, version 2.0, provides a comprehensive overview of the project’s timeline, resource allocation, and milestones. It serves as a reference to ensure the requirements align with the project’s objectives and goals.
- __Documentation of Workshops Outcomes and Decisions (Workshop Documentation, Revision 3)__: The document contains the records of workshops and meetings where stakeholders discussed and finalized requirements and decisions related to the mobile banking application. It is essential for understanding how the specific features and functionalities were determined.
- __Change Requests (Change Request Log, Version 1.1)__: The Change Request Log, version 1.1, documents any requested changes or modifications to the project’s scope, objectives, or requirements. This document is referred to for tracking and assessing potential alterations to the project.
- __Design and Development Guidelines (Library System Standards, Version 3.8)__: The Library System Standards, version 3.8, outlines the design and development guidelines, including security standards and best practices, to be followed during the development of the LMS. This document ensures compliance with industry standards and bank-specific requirements.
- __Repository URL for Software Artifacts__: [We Mzee Library Management System](https://github.com/barasamichael/We_Mzee_Library_Management_System) This URL provides access to the latest versions of software artifacts, system documentation, and other related materials, ensuring that the development team can access the most up-to-date information for reference.

## Overview of Document

## SYSTEM OVERVIEW
### Project Perspective
The LMS is a replacement for the current manual paper-based system. The current system will be phased out and replaced by the one described in this document. This transition aims to enhance user experience, security, and overall efficiency of the system.

### System Context
The LMS is a strategic initiative undertaken to enhance the library experience for borrowers. It aligns with the organization’s long-term vision of remaining at the forefront of technological advancements in Academia.

The LMS directly addresses several strategic issues:
1. Efficient management of library materials.
2. Efficient management of borrowers.
3. Spontaneous access to library records and resources

### General Constraints
#### Regulatory Compliance
The LMS must adhere to all relevant industry regulations and data security standards. This constraint affects the design and implementation of security measures, as well as testing procedures to ensure compliance.

#### Data Privacy and Security
Protecting user data and ensuring the security of financial transactions is paramount. The constraint to uphold stringent data privacy and security requirements will influence the design of encryption mechanisms, authentication protocols, and security testing.

#### Platform Compatibility
The application should be compatible with various desktop platforms, including MacOS, Windows, and Linux. This requirement requires the design and implementation of platform-agnostic features and extensive testing on different devices and operating systems.

#### Budget and Resource Limitations
The project is subject to budget and resource constraints, which may affect the level of sophistication, feature development, and the timeline for the implementation. These constraints necessitate the trade-off in design and development choices.

#### Hardware Limitations
The application needs to perform effectively on a variety of mobile devices with varying hardware capabilities. This affects design decisions to optimize performance and requires comprehensive testing across different hardware configurations.

#### Maintenance and Support
Post-implementation, the application will require ongoing maintenance and support. This constraint involves establishing procedures for maintaining the software, handling updates, and providing user support.

### Assumptions
- __User Adoption__: It is assumed that users will readily adopt and use the LMS as their primary means of conducting library-related activities. User adoption rates are critical for the project’s success.
- __Technical Infrastructure__: It is assumed that the organization’s budget on technical infrastructure and resources is sufficient to support the development of the system without any spillovers.
- __Regulatory Stability__: It is assumed that there will be no significant changes in industry regulations during the project’s life cycle that would require major revisions to the software’s compliance measures.
- __Stakeholder Availability__: It is assumed that key stakeholders, including business analysts, developers, and testers, will be available as needed to collaborate on the project’s various phases.

### The Current Situation
A local library needs a simple software system to manage its collection of books. The library contains various books authored by different authors and categorized into different genres. The system should allow library staff to perform various operations, such as adding and removing books, searching for books, and checking out books to borrowers. Additionally, it should maintain records of borrowers and their borrowing history.

Entities are as listed below:
- Book
   - Attributes: Title, Author, Genre, ISBN, Available Copies, Total Copies, and Status (Available, Checked Out).
   - Methods: Display book information.
- Author
   - Attributes: Name, ID, and Biography.
   - Methods: Display author information.
- Genre
   - Attributes: Name, ID.
   - Methods: Display genre information.
- Borrower
   - Attributes: Name, ID, Contact Information.
   - Methods: Display borrower information.
- Library
   - Attributes: List of books, list of authors, list of genres, list of borrowers.
   - Methods: Add book, remove book, search book, display book list, add borrower, remove borrower, and more.

Processes are as follows:
- Add Book
   - Collect book information (title, author, genre, ISBN, total copies).
   - Add the book to the library's collection.
- Remove Book
   - Search for a book by title or ISBN.
   - Remove the book from the library's collection.
- Search Book
   - Search for books by title, author, genre, or ISBN.
   - Display a list of matching books.
- Check Out Book
   - Search for a book by title or ISBN.
   - Check out the book to a borrower, reducing the available copies.
- Return Book
   - Search for a book by title or ISBN.
   - Check the book in, increasing the available copies.
- Add Borrower
   - Collect borrower information (name, contact information).
   - Add the borrower to the library's records.
- Remove Borrower
   - Search for a borrower by name or ID.
   - Remove the borrower from the library's records.
- Display Borrowing History
   - Search for a borrower by name or ID.
   - Display the books checked out by the borrower.

User Interface: You can create a simple command-line interface where the library staff can input commands and interact with the system. Use menus and prompts to guide users through various operations.

Data Storage: Store book, author, genre, and borrower data in text files or simple databases to persist information between program runs.

Additional Features (Optional)
i. Implement error handling for invalid inputs or operations.
ii. Provide the ability to edit book information.
iii. Implement fine-grained permission levels for library staff (e.g., administrator vs. librarian).
iv. Generate reports on the library's collection and borrowing statistics.

## SYSTEM ANALYSIS
### Overview of the Current System
#### Author and Book Registration
In the existing library system, the administrator is responsible for registering authors and their books. This process involves inputting comprehensive information about authors and their published works into the library's database. It ensures that the library's collection is properly organized and includes all relevant details about the books' authors.

#### Borrower Registration
The library accommodates both self-registered and administrator-registered borrowers. When a person wishes to borrow books from the library, they can either register themselves or seek assistance from the administrator. The registration process involves gathering essential personal details and confirming that the potential borrower meets certain eligibility criteria.

#### Borrowing Limits
To maintain a fair and balanced borrowing system, borrowers are assigned specific limits on the number of books they can have checked out simultaneously. This borrowing limit ensures that borrowers cannot take out additional books until they have returned at least one of their borrowed items, promoting fair use of the library's resources.

#### Book Return Process
When a borrower returns a book to the library, the administrator plays a vital role. They inspect the condition of the returned book and check whether it has been returned within the stipulated due date. If the book is found to be in good condition and returned within the expected timeframe, it is officially marked as returned, and no additional charges are imposed.

#### Fines for Poor Condition or Overdue Books
The library enforces fines for books that are returned in poor condition. These fines are designed to cover the costs of repair or replacement. Additionally, if a book is returned after the due date, the administrator calculates fines based on the number of days overdue and the predetermined charges per day. It's important to note that these fines and charges may be revised periodically to account for changing circumstances.

#### Administrator Actions
The administrator has the authority to execute a range of actions in the library system. They can delete a book from the library's database, effectively removing it from the collection. They can also deactivate a book temporarily, making it unavailable for borrowing. Furthermore, they have the power to deactivate or suspend a borrower's account, temporarily restricting their borrowing privileges. Finally, the administrator can also remove an author's information from the library's database, ensuring that the database remains up to date and well-organized.

### Challenges Faced by the Current System
#### Manual Data Entry and Storage
The current paper-based system requires manual data entry and storage, resulting in time-consuming processes and potential errors.

#### Proposed Solution
The new terminal-based system will automate data entry and storage, reducing manual effort and minimizing errors.

#### Inefficient Search and Retrieval
In the current system, searching for specific books, authors, genres, and borrowers is labor-intensive and time-consuming.

#### Proposed Solution
The terminal-based system will offer efficient search functionality, allowing staff to quickly locate information through user-friendly text-based menus and prompts.

#### Data Management and Updates
The current system struggles with data inconsistencies and updates, impacting data accuracy.

#### Proposed Solution
The new system will streamline data management, enabling staff to easily add, remove, and edit book, author, genre, and borrower information while implementing validation and error handling.

#### Record Keeping
Maintaining borrowing history and generating reports is a challenge in the current paper-based system.

#### Proposed Solution
The terminal-based system will automate the recording of borrowing history and offer reporting features to provide staff with insights into the library's collection and borrowing statistics.

#### User Guidance
Lack of structured user guidance and menus in the current system has led to operational challenges.

#### Proposed Solution
The new system will feature an intuitive command-line interface with clear menus and prompts to guide users, ensuring a more user-friendly experience.

#### Data Security
The paper-based records in the current system require manual guarding which is inefficient.

#### Proposed Solution
The terminal-based system will implement basic security measures, including user authentication and access control, to protect sensitive data and ensure a secure environment.

### Functional Requirements
#### Book Management
- __Add Book__: Allow library staff to add new books to the system, including details like title, author, genre, ISBN, total copies, and status.
- __Remove Book__: Provide the capability to search for and remove books from the library's collection based on title or ISBN.

#### Search and Retrieval
- __Search Book__: Enable staff to search for books by title, author, genre, or ISBN and display a list of matching books.
- __Display Book List__: Allow staff to view a comprehensive list of all books in the library.

#### Borrowing and Returning
- __Check Out Book__: Enable staff to search for a book by title or ISBN, check it out to a borrower, and update available copies.
- __Return Book__: Provide the ability to search for a book by title or ISBN, check it in, and update available copies.

#### Borrower Management
- __Add Borrower__: Allow staff to add new borrowers to the system, capturing their name and contact information.
- __Remove Borrower__: Provide the capability to search for and remove borrowers from the library's records based on name or ID.

#### Data Recording and History
- __Display Borrowing History__: Enable staff to search for a borrower by name or ID and display the books checked out by the borrower.
- __Data Validation__: Implement validation and error handling to maintain data accuracy.

#### User Guidance
- __User-Friendly Interface__: Create an intuitive command-line interface with clear menus and prompts to guide users through various operations.
- __Error Messages__: Include informative error messages to assist staff in performing operations accurately.

#### Data Security
- __User Authentication__: Implement user authentication mechanisms to ensure data security.
- __Access Control__: Apply access controls to protect sensitive data.

#### Staff Training and Support
- __Staff Training__: Offer comprehensive training and documentation to assist staff during the transition and adaptation to the new terminal-based system.
- __Ongoing Support__: Provide support and assistance to address staff concerns during the transition period.

#### Automation
- __Data Management Automation__: Automate data entry and storage processes to reduce manual work and minimize errors.
- __Fine Calculation__: Implement fine calculation and due date tracking to automate the fine-related processes.

#### Reporting
- __Generate Reports__: Develop reporting functions that allow staff to generate reports on the library's collection and borrowing statistics.

### Non-Functional Requirements
#### Performance
- __Response Time__: The system should respond promptly to user commands, ensuring quick retrieval and updates of data.
- __Scalability__: The system should be able to accommodate a growing number of books, authors, borrowers, and transactions without significant degradation in performance.

#### Usability
- __User-Friendly Interface__: The terminal-based interface should be intuitive, making it easy for staff to learn and use the system effectively.
- __Accessibility__: The system should be accessible to staff with varying levels of technical expertise.

#### Reliability
- __System Availability__: The system should be available during regular library hours, with minimal downtime for maintenance.
- __Data Integrity__: Data should be consistently accurate and reliable. All operations should ensure the integrity of the data.

#### Security
- __Data Security__: Sensitive information, such as borrower details, should be securely stored and transmitted.
- __User Authentication__: Ensure that only authorized library staff can access and modify data.
- __Audit Trail__: Maintain a log of system activities to monitor and track any unauthorized access or changes.

#### Data Storage and Management
- __Data Backup__: Implement regular data backup procedures to prevent data loss.
- __Data Storage Efficiency__: Optimize data storage to minimize the system's storage requirements.

#### Compliance
- __Regulatory Compliance__: Ensure that the system complies with relevant data protection and privacy regulations.

#### Error Handling
- __Robust Error Handling__: The system should provide clear and informative error messages to guide staff in the event of incorrect inputs or system failures.

#### Interoperability
- __Integration__: The system should be capable of integrating with other library systems or external databases for data sharing if necessary.

#### Staff Training
- __Training Requirements__: The system should have minimal training requirements, and the training should be efficient and effective for staff.

#### Documentation
- __Comprehensive Documentation__: Provide comprehensive system documentation for administrators, including user guides and technical documentation.

#### Transition Period
- __Smooth Transition__: During the transition from the paper-based system to the terminal-based system, there should be minimal disruption to library operations.

#### Resource Utilization
- __Efficient Resource Usage__: The system should utilize hardware and software resources efficiently to minimize costs and maximize performance.

#### Backup and Recovery
- __Disaster Recovery__: Plan for disaster recovery to ensure data is not permanently lost in case of system failures.

## SYSTEM DESIGN
### Class Diagram

![Class Diagram](https://github.com/barasamichael/We_Mzee_Library_Management_System/assets/111043798/630af879-7749-4629-8430-090d639814c6)

### Entity Relationship Diagram

![Entity Relationship Diagram](https://github.com/barasamichael/We_Mzee_Library_Management_System/assets/111043798/32105335-4920-4b56-a4b2-85c7d1a24b17)

### Use Case Diagram

![Use Case Diagram](https://github.com/barasamichael/We_Mzee_Library_Management_System/assets/111043798/db9655cc-ecd1-42d8-8b2e-0d1b61f530ed)


### Authenciation Flowchart

![Authentication Flowchart](https://github.com/barasamichael/We_Mzee_Library_Management_System/assets/111043798/877d15a4-f2dc-4c78-95b7-3e96b5d7c997)

### Functional Design
**Add Book**
- Before adding a book, validate that the input data is correct (e.g., ISBN format, non-negative total copies).
- Handle exceptions for invalid inputs and provide appropriate error messages.
```txt
Input: Title, Genre, ISBN,..., Total Copies
Validate the ISBN format.
Validate that Total Copies is non-negative.
If validation fails, display an error message and do not add the book.
Otherwise:
   Create a new Book object with the input information.
   Add the new Book object to the database.
```

**Remove Book**
- Check if the book exists before removing it.
- Handle exceptions for book not found and provide appropriate error messages.
```txt
Input: Book ID
Search for the book by title or ISBN or Id.
If found, remove the book from the database using the Book ID.
If not found, display an error message.
```

**Search Book**
- Ensure that the search query is not empty.
- Handle exceptions for empty search queries and provide appropriate error messages.
```txt
Input: Search Value
Check if the search query is empty.
If it's empty, display an error message.
Otherwise:
   Initialize an empty list to store matching books.
   Store returned result set into the empty list
   Display the list of matching books.
```

**Check Out Book**
- Ensure the book exists and is available before checking it out.
- Ensure the borrower has not exceeded the maximum number of borrowed books
- Handle exceptions for unavailable books and provide appropriate error messages.
```txt
Input: Borrower ID, Book ID
Search for the book by title or ISBN.
If the book is not available or maximum borrowed books are reached, display an error message.
If the book is available and current borrowed books < maximum borrowed books:
   Check it out to the borrower.
   Update the book's status and available copies.
```

**Return Book**
- Ensure the book exists and is checked out before checking it in.
- Handle exceptions for books that cannot be checked in and provide appropriate error messages.
```txt
Input: Title or ISBN
Search for the book by title or ISBN.
If the book is checked out:
   If the book is not in good conditions
      Charge the user a maintenance/repair fee
   if the book is returned late
      Calculate and charge overdue fines
Mark the book as returned and update its status and available copies.
If the book is not checked out, display an error message.
```

**Add Borrower**
- Before adding a borrower, validate that the input data is correct (e.g., contact information format).
- Handle exceptions for invalid inputs and provide appropriate error messages.
```txt
Input: Name, Contact Information
Validate the format of contact information.
If validation fails, display an error message and do not add the borrower.
Otherwise:
   Create a new Borrower object with the input information.
   Add the new Borrower object to the database.
```

**Remove Borrower**
- Check if the borrower exists before removing them.
- Handle exceptions for borrower not found and provide appropriate error messages.
```txt
Input: Borrower ID or Name
Search for the borrower by name or ID.
If found, remove the borrower from the database.
If not found, display an error message.
```

**Display Borrowing History**
- Ensure that the search query is not empty.
- Handle exceptions for empty search queries and provide appropriate error messages.
```txt
Input: Borrower Name or ID
Search for the borrower by name or ID.
If found, display the borrowing history of the borrower.
If not found, display an error message.
```
