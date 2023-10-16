-- Create the 'book' table
CREATE TABLE IF NOT EXISTS book (
	bookId INT AUTO_INCREMENT PRIMARY KEY,
	title VARCHAR(128) NOT NULL UNIQUE,
	genres VARCHAR(255) NOT NULL,
	ISBN VARCHAR(128) NOT NULL,
	copies INT DEFAULT 1 NOT NULL CHECK (copies >= 0),
	yearPublished INT CHECK (yearPublished <= YEAR(CURRENT_DATE)),
	dateRegistered DATETIME DEFAULT CURRENT_TIMESTAMP,
	isAvailable BOOLEAN DEFAULT TRUE
);

-- Create the 'author' table
CREATE TABLE IF NOT EXISTS author (
	authorId INT AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(64) NOT NULL,
	emailAddress VARCHAR(128) NOT NULL UNIQUE,
	phoneNumber VARCHAR(16) NOT NULL UNIQUE,
	residence VARCHAR(128)
);

-- Create the 'borrower' table
CREATE TABLE IF NOT EXISTS borrower (
	borrowerId INT AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(64) NOT NULL,
	emailAddress VARCHAR(128) NOT NULL UNIQUE,
	phoneNumber VARCHAR(16) NOT NULL UNIQUE,
	isSuspended BOOLEAN DEFAULT FALSE,
	isActive BOOLEAN DEFAULT TRUE,
	passwordHash VARCHAR(255) NOT NULL
);

-- Create the 'book_borrowing' table
CREATE TABLE IF NOT EXISTS book_borrowing (
	bookBorrowingId INT AUTO_INCREMENT PRIMARY KEY,
	bookId INT NOT NULL,
	borrowerId INT NOT NULL,
	dateBorrowed DATETIME DEFAULT CURRENT_TIMESTAMP CHECK (dateBorrowed <= CURRENT_TIMESTAMP),
	dueDate DATETIME DEFAULT DATE_ADD(CURRENT_TIMESTAMP, INTERVAL 5 DAY) CHECK (dueDate >= CURRENT_TIMESTAMP),
	dateReturned DATETIME,
	damageCost DECIMAL(10, 2),
	amountPaid DECIMAL(10, 2),
	FOREIGN KEY (bookId) REFERENCES book(bookId),
	FOREIGN KEY (borrowerId) REFERENCES borrower(borrowerId)
);

-- Create the 'author_assignment' table
CREATE TABLE IF NOT EXISTS author_assignment (
	authorAssignmentId INT AUTO_INCREMENT PRIMARY KEY,
	authorId INT NOT NULL,
	bookId INT NOT NULL,
	dateAssigned DATETIME DEFAULT CURRENT_TIMESTAMP,
	FOREIGN KEY (authorId) REFERENCES author(authorId),
	FOREIGN KEY (bookId) REFERENCES book(bookId)
);
