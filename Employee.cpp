#include "Employee.h"
#include <iostream>
#include "format"
using namespace std;

namespace Records {
	Employee::Employee(const string& firstname, const string& lastname)
		: m_firstName {firstname} , m_lastName {lastname} 
	{
	}
		
	void Employee::promote(int raiseAmount){
		setSalary(getSalary() + raiseAmount);
	}
		
	void Employee::demote(int demeritAmount){
		setSalary(getSalary() - demeritAmount);
	}
	
	void Employee::hire(){
		m_hired = true;
	}
	
	void Employee::fire(){
		m_hired = false;
	}

	void Employee::display() const{
		cout << format("Employee: {}, {}", getLastName(), getFirstName()) << endl;
		cout << "-----------------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << format("Employee Number: {}", getEmployeeNumber()) << endl;
		cout << format("Salary: ${}", getSalary()) << endl;
		cout << endl;
	}

	/* Getters and Setters */
	void Employee::setFirstName(const string& firstname){
		m_firstName = firstname;
	}
	
	const string& Employee::getFirstName() const {
		return m_firstName;
	}

	void Employee::setLastName(const string& lastname){
		m_lastName = lastname;
	}

	const string& Employee::getLastName() const {
		return m_lastName;
	}

	void Employee::setEmployeeNumber(int employeeNumber){
		m_employeeNumber = employeeNumber;
	}

	int Employee::getEmployeeNumber() const {
		return m_employeeNumber;
	}

	void Employee::setSalary(int newSalary){
		m_salary = newSalary;
	}

	int Employee::getSalary() const {
		return m_salary;
	}

	bool Employee::isHired() const {
		return m_hired;
	}
}


