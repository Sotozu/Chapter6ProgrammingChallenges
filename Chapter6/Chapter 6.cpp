#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
double calculateRetail(double, double);
int main() {
	//1. Markup
	double sale, total, percent;

	do {
		cout << "Please enter the wholesale cost of the item: $";
		cin >> sale;
		if (sale < 0) {
			cout << "ERROR: Enter a positive value.\n";
		}
	} while (sale < 0); //check to not let negative values be set to sale

	do {
		cout << "Please enter the markup percent of item (%): ";
		cin >> percent;
		if (percent < 0) {
			cout << "ERROR: Enter a positive value.\n";
		}
	} while (percent < 0);//check to not let negative values be set to percent

	if (percent > 1) {
		percent = percent / 100;
	}

	total = calculateRetail(sale, percent);
	cout << fixed << showpoint << setprecision(2);
	cout << "The retail price for the item is: $" << total;

	return 0;
}
double calculateRetail(double sale, double percent) {
	int total = sale + (sale * percent);

	return total;
}*/

// 3. Winning Division
/*
double getSales(double &);

void findHighest(double, double, double, double);

int main() {

	double division[4];
	string divNames[4] = { "North East", "South East", "North West", "South West" };
	for (int i = 0; i < 4; i++) {
		cout << "Please enter the sales for the " << divNames[i] << " division.\n";
		getSales(division[i]);
	}

	findHighest(division[0], division[1], division[2], division[3]);

	return 0;
 }

double getSales(double &division) {

	do {
		cout << "Sales: $";
		cin >> division;
		if (division < 0) {
			cout << "ERROR: Please enter a positive sales figure.\n";
		}
	} while (division < 0);
	return division;
}

void findHighest(double northE, double southE, double northW, double southW) {

	double check[4] = { northE, southE, northW, southW };
	string divNames[4] = { "North East", "South East", "North West", "South West" };

	int count = 0;
	for (int i = 1; i < 4; i++) {
		if (check[0] < check[i]) {
			check[0] = check[i];
			count++;
		}
	}
	cout << divNames[count] << " has the highest sales of: $" << check[0];

}*/

// 4. Safest Driving Area

/*
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
int main() {
	string region[5] = { "north", "south", "east", "west", "central" };
	int regionNum[5];

	for (int i = 0; i < 5; i++) {
		regionNum[i]=getNumAccidents(region[i]);
		cout << endl;
	}

	findLowest(regionNum[0], regionNum[1], regionNum[2], regionNum[3], regionNum[4]);
	return 0;
}

int getNumAccidents(string region) {
	int accidentNum;

	do {
		cout << "Enter the number of automobile accidents in the " << region << " region.\n";
		cout << "Accident #: ";
		cin >> accidentNum;
		if (accidentNum <= 0) {
			cout << "ERROR: Please enter a number greater than 0.\n";
		}
	} while (accidentNum <= 0);

	return accidentNum;

}
void findLowest(int north, int south, int east, int west, int central) {
	int count = 0;
	int accident[5] = { north, south, east, west, central };
	string region[5] = { "north", "south", "east", "west", "central" };

	for (int i = 1; i < 5; i++) {
		if (accident[0] > accident[i]) {
			accident[0] = accident[i];
			region[0] = region[i];
		}
	}
	cout << "The " << region[0] << " region has the lowest accidents totaling: " << accident[0];
}*/

// 5. Falling Distance

/*
double fallingDistance(double);
const double gravity = 9.8;
int main() {

	double distance;
	for (int i = 0; i < 10; i++) {
		distance = fallingDistance(i);
		cout << setprecision(2) << fixed << showpoint;
		cout << "After " << i << " second the distance is: " << distance << "(meters)" << endl;
	}

	return 0;

}
double fallingDistance(double time) {
	double distance;

	distance = 0.5*(gravity)*pow(time,2);
	
	
	return distance;
}*/

// 6. Kinetic Energy

/*
double kineticEnergy(double, double);

int main() {
	double mass, velocity, kinetic_energy;

	cout << "Please enter the mass of the object.\n";
	cout << "MASS(lb): ";
	cin >> mass;

	cout << "Please enter the velocity of the object.\n";
	cout << "VELOCITY(m/s): ";
	cin >> velocity;


	kinetic_energy =kineticEnergy(mass, velocity);
	cout << showpoint << setprecision(2) << fixed;
	cout << "Given mass is " << mass << " and velocity is " << velocity << " the kinetic energy is...\n";
	cout << "KINETIC ENERGY: " << kinetic_energy;

	return 0;
}

double kineticEnergy(double mass, double velocity) {

	double kinetic_energy;

	kinetic_energy = 0.5 * mass * pow(velocity, 2);

	return kinetic_energy;
}*/

// 7. Celcius Temprature Table

/*
double celcius(int);

int main() {

	cout << "FARENHEIT TO CELCCIUS\n";
	double conversion;
	
	for (int i = 1; i <= 20; i++) {
		cout << showpoint << fixed << setprecision(2);
		conversion = celcius(i);
		cout << "Farenheit = " << setw(6) << left << i << "Celcius = " << conversion << endl;

	}
	return 0;

}

double celcius(int farenheit) {

	double conversion;
	conversion = ((static_cast<double>(5) / 9)*(static_cast<double>(farenheit) - 32));
	return conversion;

}*/

// 8. 

/*
void coinToss(int);

int main() {

	int num;

	cout << "COINT TOSS\n";
	cout << "How many times would you like to flip the coin?\n";
	cout << "#: ";
	cin >> num;

	coinToss(num);
}

void coinToss(int num) {
	srand(time(0));
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < num; i++) {
		int head_tail = rand() % 2 + 1;
		if (head_tail == 1) {
			cout << "HEADS\n";
			count1++;
		}
		else {
			cout << "TAILS\n";
			count2++;
		}
	}
	cout << "TOTAL HEADS: " << count1 << endl;
	cout << "TOTAL TAILS: " << count2 << endl;
}*/

// 9. Present Value

/*
double presentValue (double, double, int);

int main() {

	double future_value, interest_rate, years, present_value;

	cout << "PRESENT VALUE\n";

	cout << "Please enter the future ammount of money you would like to have in the account.\n";
	cout << "FUTURE VALUE($): ";
	cin >> future_value;

	cout << "Please eneter the interest rate of the account.\n";
	cout << "INTEREST RATE (%): ";
	cin >> interest_rate;

	cout << "Please enter the amount of years that you plan to have the account open.\n";
	cout << "YEARS: ";
	cin >> years;

	present_value = presentValue(future_value, interest_rate, years);
	cout << showpoint << setprecision(2) << fixed;
	cout << "The amount you would have to deposit today given...\n";
	cout << "\nFUTURE VALUE: $" << future_value << "\nINTEREST RATE: " << interest_rate << "%" <<"\nYEARS: " << years << "\nis...";
	cout << "\nPRESET VALUE: $" << present_value;
	

	return 0;
}

double presentValue(double fv, double ir, int y) {
     
	ir = ir / 100; //converts the interest rate to a percent amount if originall inputed as a whole number

	double present_value = fv / pow((1 + ir), y);

	return present_value;

}*/

// 10. Future Value

/*
double futureValue(double, double, int);
int main() {

	double present_value, interest_rate, future_value;
	int months;

	cout << "FUTURE VALUE\n";
	cout << "Please eneter the current balance of your account.\n";
	cout << "PRESENT VALUE($): ";
	cin >> present_value;

	cout << "\nPlease enter the interest rate of your account.\n";
	cout << "INTEREST RATE(%): ";
	cin >> interest_rate;

	cout << "\nPlease eneter the amount of months the account will be open.\n";
	cout << "MONTHS: ";
	cin >> months;

	cout << showpoint << setprecision(2) << fixed;
	cout << "\nThe future value of your account given your inputed information.\n";
	cout << "FUTURE VALUE($): ";

	cout << futureValue(present_value, interest_rate, months);

	return 0;
}
double futureValue(double pv, double ir, int m) {

	ir = ir / 100; //setting intereset rate to a percent value for the equation.

	double future_value = pv * pow((1 + ir), m);

	return future_value;
}*/

// 11. Lowest Score Drop
/*
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int main() {

	int score[5];
	for(int i = 0; i < 5; i++){
		cout << "Please enter a score for test " << i+1 <<".\n";
		getScore(score[i]);
	}
	calcAverage(score[0], score[1], score[2], score[3], score[4]);

	return 0;
}
void getScore(int &score) {
	do {
		
		cout << "SCORE: ";
		cin >> score;

		if (score < 0 || score > 100) {
			cout << "\nERROR: Please enter a valid score.\n";
		}

	} while (score < 0 || score > 100);

}
void calcAverage(int s1, int s2, int s3, int s4, int s5) {
	
	int average;
	int counter = 0;
	int lowest_num = findLowest(s1, s2, s3, s4, s5);

	int scores[5] = { s1, s2, s3, s4, s5 };
	
	for (int i = 0; i < 5; i++) {
		if (counter == 0) {
			if (scores[i] == lowest_num) {
				scores[i] = 0;
				counter++;
			}
		}
	}

	average = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4])/4; //this includes the lowest value which
																			   //is now 0. We divide by 4 and calculate for
																			   //the scores that have values.
	cout << "\nDropped the lowest score.\n";
	cout << "LOWEST SCORE: " << lowest_num;
	cout << "\nThe average of the 4 highest test scores.\n";
	cout << "AVERAGE: " << average;
}

int findLowest(int s1, int s2, int s3, int s4, int s5) {
	int findLow[5] = { s1, s2, s3, s4, s5 };
	int place_holder;

	for (int i = 0; i < 5; i++) {
		if (findLow[0] > findLow[i]) {
			place_holder = findLow[0];

			findLow[0] = findLow[i];
			findLow[i] = place_holder;
		}
	}
	return findLow[0];
}*/

// 12. Star Search


/*
void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main() {
	double judgeScore[5];

	for (int i = 0; i < 5; i++) {
		cout << "Please enter the score for judge " << i + 1 << endl;
		getJudgeData(judgeScore[i]);
	}

	calcScore(judgeScore[0], judgeScore[1], judgeScore[2], judgeScore[3], judgeScore[4]);


	return 0;
}

void getJudgeData(double& judgeScore) {
	do {
		cout << "SCORE: ";
		cin >> judgeScore;

		if (judgeScore < 0 || judgeScore > 10){
			cout << "ERROR: Please enter a number between 0 and 10\n";
		} 

	} while (judgeScore < 0 || judgeScore > 10);
}
void calcScore(double s1, double s2, double s3, double s4, double s5) {
	double lowestScore;
	double highestScore;
	bool check1 = true, check2 = true;
	double total = 0;
	double average;

	lowestScore = findLowest(s1, s2, s3, s4, s5);
	highestScore = findHighest(s1, s2, s3, s4, s5);

	double scores[5] = { s1, s2, s3, s4, s5 };

	for (int i = 0; i < 5; i++) {
		if (check1 == true) {
			if (scores[i] == lowestScore) {
				scores[i] = 0;
				check1 = false;
			}
		}
		if (check2 == true) {
			if (scores[i] == highestScore) {
				scores[i] = 0;
				check2 = false;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		total += scores[i];
	}

	average = total / 3;

	cout << "\nThe contestants score is: " << average;

}
double findLowest(double s1, double s2, double s3, double s4, double s5){
	double scores[5] = { s1, s2, s3, s4, s5 };

	for (int i = 0; i < 5; i++) {
		if (scores[0] > scores[i]) {
			scores[0] = scores[i];
		}
	}
	return scores[0];
}
double findHighest(double s1, double s2, double s3, double s4, double s5){
	double scores[5] = { s1, s2, s3, s4, s5 };
	for (int i = 0; i < 5; i++) {
		if (scores[0] < scores[i]) {
			scores[0] = scores[i];
		}
	}
	return scores[0];
}
*/

// 13. Days Out
/*
int employees();
int sickDays(int);
double averageDaysAbsent(int, int);

int main() {

	int num_empl;
	int total_sick_days;
	double average_sick_days;
	
	num_empl = employees();
	total_sick_days = sickDays(num_empl);
	average_sick_days = averageDaysAbsent(num_empl, total_sick_days);

	cout << "\nThe average amount of sicks days each employee took.\n";
	cout << "AVERAGE # OF SICK DAYS: " << average_sick_days;


	return 0;

}
int employees() {
	int employees;
	cout << "How many employees does the company have?\n";
	do {
		cout << "# EMPLOYEES: ";
		cin >> employees;
		if (employees < 1) {
			cout << "ERROR: Please enter 1 employee or more.\n";
		}
	} while (employees < 1);
	return employees;
}
int sickDays(int employees) {
	int sick_days;
	int total = 0;

	cout << "Please enter the number of days sick for each employee.\n";

	for (int i = 0; i < employees; i++) {
		do {
			cout << "EMPLOYEE " << i+1 << ": ";
			cin >> sick_days;
			if (sick_days < 0) {
				cout << "ERROR: Please enter positive integers\n";
			}
		} while (sick_days < 0);
		total += sick_days;

	}

	return total;
}
double averageDaysAbsent(int num_empl, int total_sick_days) {

	double average_sick_days = static_cast<double>(total_sick_days) / num_empl;

	return average_sick_days;

}
*/
/*

// 14. Order Status

void gatherInfo(int &, int&);
void calculate(int, int, int);

int main() {

	int spools_stock, spools_ordered, shipping, special_charges;
	gatherInfo(spools_stock, spools_ordered);
	calculate(spools_stock, spools_ordered, shipping = 10);


	return 0;
}
void gatherInfo(int &spools_stock, int &spools_ordered) {
	do {
		cout << "NUMBER OF SPOOLS ORDERED: ";
		cin >> spools_ordered;
		if (spools_ordered < 1) {
			cout << "ERROR: Enter 1 or more.\n";
		}
	} while (spools_ordered < 1);
	do {
		cout << "NUMBER OF SPOOLS IN STOCK: ";
		cin >> spools_stock;
		if (spools_stock < 0) {
			cout << "ERROR: Enter 0 or more.\n";
		}
	} while (spools_stock < 0);
}
void calculate(int spools_stock, int spools_ordered, int shipping) {

	int ready_to_ship = spools_ordered;
	int backorder;
	int total_shipping;
	int subtotal;

	if (spools_ordered >= spools_stock) {
		ready_to_ship = spools_stock;
	}

	cout << "READY TO SHIP: " << ready_to_ship << endl;

	if (spools_ordered > spools_stock) {
		backorder = spools_ordered - spools_stock;
		cout << "BACKORDER: " << backorder << endl;
	}
	subtotal = ready_to_ship * 100;
	total_shipping = ready_to_ship * shipping;
	cout << "SUBTOTAL READY TO SHIP: $" << subtotal << endl;

	cout << "TOTAL READY SHIPPING AND HANDLING: $" << total_shipping << endl;
	
	cout << "TOTAL FOR THE ORDER: $" << subtotal + total_shipping << endl;
	
}
*/

// 15. Overloaded Hospital
/*
void totalCharges(int, int);
void totalCharges(int, int, int, int);

void inPatient(int&, int&);
void outPatient(int &, int &, int &, int &);
int main() {

	int patient_type, num_days, daily_rate, medication_cost, service_cost;


	cout << "Is this patients an IN-PATIENT or and OUT-PATIENT?\n";
	cout << "PRESS '1' for IN-PATIENT and '2' for OUR-PATIENT\n";
	do {
		cout << "PATIENT TYPE: ";
		cin >> patient_type;
	} while (patient_type != 1 && patient_type != 2);

	switch (patient_type) {
	case 1:
		inPatient(num_days, daily_rate);
		totalCharges(num_days, daily_rate);
		break;
	case 2:
		outPatient(num_days, daily_rate, medication_cost, service_cost);
		totalCharges(num_days, daily_rate, medication_cost, service_cost);
		break;
	default:
		break;
	}


	return 0;
}

void totalCharges(int num_days, int daily_rate, int medication_cost, int service_cost) {
	int total = (num_days * daily_rate) + medication_cost + service_cost;
	cout << fixed << showpoint << setprecision(2);
	cout << "\nPATIENT REPORT\n";
	cout << "Patient stayed for " << num_days << " days." << endl;
	cout << "Daily Rate: $" << daily_rate << endl;
	cout << "Patient medication costs: $" << medication_cost << endl;
	cout << "Patient service costs: $" << service_cost << endl;
	cout << "The total costs are: $" << total;
}

void inPatient(int& num_days, int& daily_rate) {
	cout << "\nIN-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);
}

void inPatient(int &num_days, int &daily_rate) {
	cout << "\nIN-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);
}
void outPatient(int &num_days, int &daily_rate, int &medication_cost, int &service_cost) {
	cout << "\nOUT-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);

	cout << "Please enter the medication costs for the patient.\n";
	do {
		cout << "MEDICATION COST: $";
		cin >> medication_cost;
		if (medication_cost < 0) {
			cout << " ERROR: Please enter a positive number.\n";
		}
	} while (medication_cost < 0);
	
	cout << "Please enter the service costs for the patient.\n";
	do {
		cout << "SERVICE COST: $";
		cin >> service_cost;
		if (service_cost < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (service_cost < 0);
}
*/

// 16. Population
/*
void population_size(int, double, double, int);
int main() {

	int starting_size, years;
	double birth_rate, death_rate;

	cout << "Enter the starting size of the population.\n";
	do {
		cout << "STARTING SIZE: ";
		cin >> starting_size;
		if (starting_size < 2) {
			cout << "ERROR: Please enter a number equal or greate than 2.\n";
		}
	} while (starting_size < 2);

	cout << "Enter the birthrate of the population.\n";
	do {
		cout << "BIRTH RATE(%): ";
		cin >> birth_rate;
		if (birth_rate < 0) {
			
		}
	} while (birth_rate < 0);

	cout << "Enter the death rate of the population.\n";
	do {
		cout << "DEATH RATE(%): ";
		cin >> death_rate;
		if (death_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (death_rate < 0);


	cout << "Enter the number of years to record the population.\n";
		do {
		cout << "YEARS: ";
		cin >> years;
		if (years < 1){
		cout << "ERROR: Please enter a positive number equal or greater than 1.\n";
		}
	} while (years < 1);

	population_size(starting_size, birth_rate, death_rate, years);

	return 0;
}
void population_size(int starting_size, double birth_rate, double death_rate, int years) {
	if (death_rate > 1) {
		death_rate /= 100;
	}
	if (birth_rate > 1) {
		birth_rate /= 100;
	}

	for (int i = 0; i < years; i++) {
		cout << "YEAR: " << setw(5) << left << i+1 << "POPULATION: " << starting_size << endl;
		starting_size = starting_size + (birth_rate * starting_size) - (death_rate * starting_size);
	}
}
*/

// 17. Transient Population

/*
void population_size(int, double, double, int, int, int);
int main() {

	int starting_size, years, arrival, departures, arrivals;
	double birth_rate, death_rate;

	cout << "Enter the starting size of the population.\n";
	do {
		cout << "STARTING SIZE: ";
		cin >> starting_size;
		if (starting_size < 2) {
			cout << "ERROR: Please enter a number equal or greate than 2.\n";
		}
	} while (starting_size < 2);

	cout << "Enter the birthrate of the population.\n";
	do {
		cout << "BIRTH RATE(%): ";
		cin >> birth_rate;
		if (birth_rate < 0) {

		}
	} while (birth_rate < 0);

	cout << "Enter the death rate of the population.\n";
	do {
		cout << "DEATH RATE(%): ";
		cin >> death_rate;
		if (death_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (death_rate < 0);

	cout << "Please enter the number of people who depart from the population each year.\n";
	do {
		cout << "DEPARTED: ";
		cin >> departures;
		if (departures < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (departures < 0);

	cout << "Please enter the number of people who arrive into the population each year.\n";
	do {
		cout << "ARRIVALS: ";
		cin >> arrivals;
		if (arrivals < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (arrivals < 0);

	cout << "Enter the number of years to record the population.\n";
	do {
		cout << "YEARS: ";
		cin >> years;
		if (years < 1) {
			cout << "ERROR: Please enter a positive number equal or greater than 1.\n";
		}
	} while (years < 1);

	population_size(starting_size, birth_rate, death_rate, departures, arrivals, years);

	return 0;
}
void population_size(int starting_size, double birth_rate, double death_rate, int departures, int arrivals, int years) {
	if (death_rate > 1) {
		death_rate /= 100;
	}
	if (birth_rate > 1) {
		birth_rate /= 100;
	}

	for (int i = 0; i < years; i++) {
		cout << "YEAR: " << setw(5) << left << i + 1 << "POPULATION: " << starting_size << endl;
		starting_size = starting_size - departures + arrivals;
		starting_size = starting_size + (birth_rate * starting_size) - (death_rate * starting_size);
	}
}
*/

// 18. Paint Job Estimator
/*
void totalWallSpace(int &);
void calcLaborHours(int, double &);
void gallons(int ,double &);
void costOfPaint(double, double&);
void laborCost(double, double&);
void totalCost(double, double, double&);

int main() {
	int total_wall_space;
	double num_gallons;
	double labor_hours;
	double labor_cost;
	double paint_cost;
	double total_cost;

	int width_size1 = 30;
	int width_size2 = 2;
	
	totalWallSpace(total_wall_space); //retrieves total wall space
	gallons(total_wall_space, num_gallons); // retrieves the gallons necessary
	costOfPaint(num_gallons, paint_cost); //retrieve the cost of the paint
	calcLaborHours(total_wall_space, labor_hours); // retrieves the hours required to work on the job
	laborCost(labor_hours, labor_cost); // requires the cost of the labor for the job
	totalCost(paint_cost, labor_cost, total_cost); //calculates the total cost;

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "\nJOB INFORMATION\n";
	cout << "--------------------------------------------" << endl;
	cout << setw(width_size1) << left << "TOTAL WALL SPACE:" << setw(width_size2) << left << "" << total_wall_space << "(sqft)" << endl;
	cout << setw(width_size1) << left << "GALLONS OF PAINT REQUIRED:" << setw(width_size2) << left << "" << num_gallons << "(gal)" << endl;
	cout << setw(width_size1) << left << "TOTAL COST OF PAINT:" << setw(width_size2) << left << "$" << paint_cost << endl;
	cout << setw(width_size1) << left << "TOTAL LABOR HOURS REQUIRED:" << setw(width_size2) << left << "" << labor_hours <<"(h)" << endl;
	cout << setw(width_size1) << left << "TOTAL LABOR COSTS:" << setw(width_size2) << left << "$" << labor_cost <<  endl;
	cout <<"--------------------------------------------" << endl;
	cout << setw(width_size1) << left << "TOTAL COSTS:" << setw(width_size2) << left << "$" << total_cost << endl;



	return 0;
}
void totalWallSpace(int &total_wall_space) {
	total_wall_space = 0;
	int rooms;
	int sqfeet;
	cout << "How many rooms are there in this job.\n";
	do {
		cout << "ROOMS: ";
		cin >> rooms;
		if (rooms < 1) {
			cout << "ERROR: Please enter 1 or more rooms.\n";
		}
	} while (rooms < 1);

		cout << "\nPlease enter the number of square feet in the rooms.\n";

	for (int i = 0; i < rooms; i++) {
		cout << "Room " << i + 1 << ": ";
		do {
			cin >> sqfeet;
			total_wall_space += sqfeet;
			if (sqfeet < 0) {
				cout << "ERROR: Please enter a positive value for the wall area.\n";
			}
		} while (sqfeet < 0);
	}
}
void calcLaborHours(int total_wall_space, double &labor_hours) {

	labor_hours = (static_cast<double>(total_wall_space) / 110) * 8;

}
void gallons(int total_wall_space, double &num_gallons) {
	num_gallons = (static_cast<double>(total_wall_space) / 110);
}
void costOfPaint(double num_gallons, double& paint_cost) {
	cout << "Please enter the cost of the paint per gallon.\n";
	do {
		cout << "PAINT: $";
		cin >> paint_cost;
		if (paint_cost < 10.00) {
			cout << "ERROR: Paint cant be less than $10.00.\n";
		}
	} while (paint_cost < 10.00);
	paint_cost *= num_gallons;
}
void laborCost(double labor_hours, double& labor_cost) {
	labor_cost = labor_hours * 25;
}

void totalCost(double paint_cost, double labor_cost, double& total_cost) {

	total_cost = paint_cost + labor_cost;
}
*/

// 19. Using Files - Hospital Report
/*
void totalCharges(int, int);
void totalCharges(int, int, int, int);

void inPatient(int&, int&);
void outPatient(int&, int&, int&, int&);
int main() {
	

	int patient_type, num_days, daily_rate, medication_cost, service_cost;

	

	cout << "Is this patients an IN-PATIENT or and OUT-PATIENT?\n";
	cout << "PRESS '1' for IN-PATIENT and '2' for OUT-PATIENT\n";
	do {
		cout << "PATIENT TYPE: ";
		cin >> patient_type;
	} while (patient_type != 1 && patient_type != 2);

	switch (patient_type) {
	case 1:
		inPatient(num_days, daily_rate);
		totalCharges(num_days, daily_rate);
		break;
	case 2:
		outPatient(num_days, daily_rate, medication_cost, service_cost);
		totalCharges(num_days, daily_rate, medication_cost, service_cost);
		break;
	default:
		break;
	}


	return 0;
}

void totalCharges(int num_days, int daily_rate) {
	int total = num_days * daily_rate;
	ofstream inFile;

	inFile.open("report.txt");
	inFile << fixed << showpoint << setprecision(2);
	inFile << "PATIENT REPORT\n";
	inFile << "Patient stayed for " << num_days << " days." << endl;
	inFile << "Daily Rate: $" << daily_rate << endl;
	inFile << "The total costs are: $" << total;

	inFile.close();
}

void totalCharges(int num_days, int daily_rate, int medication_cost, int service_cost) {
	int total = (num_days * daily_rate) + medication_cost + service_cost;
	ofstream inFile;

	inFile.open("report.txt");
	inFile << fixed << showpoint << setprecision(2);
	inFile << "PATIENT REPORT\n";
	inFile << "Patient stayed for " << num_days << " days." << endl;
	inFile << "Daily Rate: $" << daily_rate << endl;
	inFile << "Patient medication costs: $" << medication_cost << endl;
	inFile << "Patient service costs: $" << service_cost << endl;
	inFile << "The total costs are: $" << total;

	inFile.close();
}

void inPatient(int& num_days, int& daily_rate) {
	cout << "\nIN-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);
}
void outPatient(int& num_days, int& daily_rate, int& medication_cost, int& service_cost) {
	cout << "\nOUT-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hospital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);

	cout << "Please enter the medication costs for the patient.\n";
	do {
		cout << "MEDICATION COST: $";
		cin >> medication_cost;
		if (medication_cost < 0) {
			cout << " ERROR: Please enter a positive number.\n";
		}
	} while (medication_cost < 0);

	cout << "Please enter the service costs for the patient.\n";
	do {
		cout << "SERVICE COST: $";
		cin >> service_cost;
		if (service_cost < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (service_cost < 0);
}
*/
// 20. Stock Profit
/*
void determineEndResult(double, double, double, double, int);
int main() {
	double purchase_price, purchase_commission, selling_price, selling_commission;
	int number_stock_purchacsed;

	cout << "Please enter the current price of each share of stock.\n";
	cout << "STOCK PRICE: $";
	cin >> purchase_price;

	cout << "Please enter the number of stocks you will purchase.\n";
	cout << "NUMBER OF STOCK: ";
	cin >> number_stock_purchacsed;

	cout << "What is the purchase commision on the stock.\n";
	cout << "PURCHASE COMMISSION(%): ";
	cin >> purchase_commission;

	cout << "What is the selling price of each share of the stock now?\n";
	cout << "SELLING PRICE: $";
	cin >> selling_price;

	cout << "What is the selling commission of the stock.\n";
	cout << "SELLING COMMISSION(%): ";
	cin >> selling_commission;

	determineEndResult(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchacsed);

	return 0;
}
void determineEndResult(double purchase_price, double purchase_commission, double selling_price, double selling_commission, int number_stock_purchased) {
	double result;

	if (purchase_commission > 1) {
		purchase_commission /= 100;
	}
	if (selling_commission > 1) {
		selling_commission /= 100;
	}

	result = ((number_stock_purchased * selling_price) - ((number_stock_purchased * selling_price) * selling_commission)) - ((number_stock_purchased * purchase_price) - ((number_stock_purchased * purchase_price) * purchase_commission));

	cout << "Tranding has resulted in...\n";
	if (result < 0) {
		cout << "NET LOSS: $" << result;
	}
	else if (result > 0) {
		cout << "NET GIAN: $" << result;
	}
	else {
		cout << "NOT GAIN OR LOSS: $" << result;
	}
}
*/


// 21. Multiple Stock Sales
/*
double determineEndResult(double, double, double, double, int);
void gatherStockInfo(double&, double&, double&, double&, int&);
int main() {

	double purchase_price, purchase_commission, selling_price, selling_commission, total = 0, result;
	int number_stock_purchased, different_stock_amount;
	cout << "How many types of stock will you be purchaseing?\n";

	cin >> different_stock_amount;




	for (int i = 0; i < different_stock_amount; i++) {
		cout << "STOCK TYPE: " << i + 1 << endl;
		gatherStockInfo(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchased);

		result = determineEndResult(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchased);
		total += result;
	}

	cout << "Tranding has totaled in...\n";
	if (total < 0) {
		cout << "NET LOSS: $" << total;
	}
	else if (total > 0) {
		cout << "NET GIAN: $" << total;
	}
	else {
		cout << "NOT GAIN OR LOSS: $" << total;
	}

	return 0;
}

double determineEndResult(double purchase_price, double purchase_commission, double selling_price, double selling_commission, int number_stock_purchased) {
	double result;

	if (purchase_commission > 1) {
		purchase_commission /= 100;
	}
	if (selling_commission > 1) {
		selling_commission /= 100;
	}

	result = ((number_stock_purchased * selling_price) - ((number_stock_purchased * selling_price) * selling_commission)) - ((number_stock_purchased * purchase_price) - ((number_stock_purchased * purchase_price) * purchase_commission));

	return result;
}

void gatherStockInfo(double& purchase_price, double& purchase_commission, double& selling_price, double& selling_commission, int& number_stock_purchased) {
	
	cout << "Please enter the current price of each share of stock.\n";
	cout << "STOCK PRICE: $";
	cin >> purchase_price;

	cout << "Please enter the number of stocks you will purchase.\n";
	cout << "NUMBER OF STOCK: ";
	cin >> number_stock_purchased;

	cout << "What is the purchase commision on the stock.\n";
	cout << "PURCHASE COMMISSION(%): ";
	cin >> purchase_commission;

	cout << "What is the selling price of each share of the stock now?\n";
	cout << "SELLING PRICE: $";
	cin >> selling_price;

	cout << "What is the selling commission of the stock.\n";
	cout << "SELLING COMMISSION(%): ";
	cin >> selling_commission;
	cout << endl;
}
*/

// 22. isPrime Function
/*
bool isPrime(int);
int main() {
	bool result;
	int num;
	do {
		cout << "Please enter a number to check if it is prime.\n";
		cout << "Enter '0' to quit.\n\n";
		cout << "NUMBER: ";
		cin >> num;
		if (num == 0) {
			cout << "Goodbye!";
			break;
		}
		result = isPrime(num);
		if (result == true) {
			cout << "The number " << num << " is prime!\n";
		}
		else {
			cout << "The number " << num << " is NOT prime!\n";
		}
	} while (num != 0);

	return 0;
}
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
*/

// 23. Prime Number List
/*
bool isPrime(int);

int main() {
	ofstream inFile;
	inFile.open("primelist.txt");

	inFile << "PRIME NUMBERS.\n";
	for (int i = 0; i <= 100; i++) {
		if (isPrime(i) == true) {
			inFile << i<<endl;
		}
	}
	inFile.close();
	return 0;
}

bool isPrime(int num){
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

*/

// 24. Rock, Paper, Scissors Game

/*
void randomChoice(int&);
void determineWinner(int, int);
int main() {
	int computer_choice;
	int player_choice;
	randomChoice(computer_choice);

	cout << "Please enter your choice.\n";
	cout << setw(10) << left << "ROCK:" << 1 << endl;
	cout << setw(10) << left << "PAPER:" << 2 << endl;
	cout << setw(10) << left << "SCISSORS: " << 3 << endl << endl;

	cout << "(ENTER) CHOICE: ";
	cin >> player_choice;

	switch (computer_choice) {
	case (1):
		cout << "Computer chooses: ROCK" << endl;
		break;
	case (2):
		cout << "Computer chooses: PAPER" << endl;
			break;
	case (3):
		cout << "Computer chooses: SCISSORS" << endl;
	}

	determineWinner(player_choice, computer_choice);

	return 0;
}
void randomChoice(int& computer_choice) {
	srand(time(0));
		computer_choice = rand() % 3 + 1;
}
void determineWinner(int player_choice, int computer_choice) {
	bool playerWins;

	if (player_choice == computer_choice) {
		cout << "Draw!.\n";
		exit;
	}
	else if (player_choice == 1 && computer_choice == 3) { //player ROCK and computer SCISSORS
		playerWins = true;
	}
	else if (player_choice == 2 && computer_choice == 1) { //player PAPER and computer ROCK
		playerWins = true;
	}
	else if (player_choice == 3 && computer_choice == 2) { //player SCISSORS and computer PAPER
		playerWins = true;
	}
	else {
		playerWins = false;
	}

	if (playerWins == true) {
		cout << "Player is the WINNER!\n";
	}
	else {
		cout << "Computer is the WINNER!\n";
	}
}
*/

// 25. Travel Expenses
/*
void numOfDays(int&);

void timeOfDeparture(double&, double&, bool&);
void timeOfArrival(double&, double&, bool&);

void roundTripFare(double&);
void carRentalExpense(double&);
void privateCar(double&);
void parkingFees(double&, double&, int);
void taxiFare(double&, double&, int);
void registrationFees(double&);
void hotelExpenses(double&, double&, int);
void foodExpenses(double&, double&, double, double, bool, bool);
void totalExpenses(double&, double, double, double, double, double, double, double, double);
void totalOwed(double&, double, double, double, double);


int main() {
	int days, fees_days;
	double dep_hour, dep_min, arr_hour, arr_min, ret_time, round_trip_fare, car_rental_expense, miles_driven_expense,
		total_parking_fees, total_parking_fees_owed, total_taxi_fare, total_taxi_fees_owed, registration_fees,
		hotel_expenses_owed, total_hotel_expenses, food_expenses_owed, total_food_expenses, total_expense, total_owed;
	bool dep_AM, arr_AM;

	cout << "---------------------------------\n";
	cout << "BUSINESS TRIP PROGRAM\n";
	cout << "---------------------------------\n";

	numOfDays(days);

	timeOfDeparture(dep_hour, dep_min, dep_AM);

	timeOfArrival(arr_hour, arr_min, arr_AM);

	roundTripFare(round_trip_fare);

	carRentalExpense(car_rental_expense);

	privateCar(miles_driven_expense);

	parkingFees(total_parking_fees_owed, total_parking_fees, days);

	taxiFare(total_taxi_fees_owed, total_taxi_fare, days);

	registrationFees(registration_fees);

	hotelExpenses(hotel_expenses_owed, total_hotel_expenses, days);

	foodExpenses(food_expenses_owed, total_food_expenses, arr_hour, dep_hour, arr_AM, dep_AM);

	totalExpenses(total_expense, round_trip_fare, car_rental_expense, miles_driven_expense,
		total_parking_fees, total_taxi_fare, registration_fees,
		total_hotel_expenses, total_food_expenses);

	totalOwed(total_owed, total_parking_fees_owed, total_taxi_fees_owed, hotel_expenses_owed, food_expenses_owed);

	return 0;
}
void numOfDays(int& days) {
	cout << "\nNUMBER OF DAYS INFORMATION\n";
	cout << "Please enter the total amount of days spent on the trip.\n";
	do {
		cout << "DAYS: ";
		cin >> days;
		if (days < 1) {
			cout << "ERROR: Please enter 1 or greater for the days.\n";
		}
	} while (days < 1);
	return;
}

void timeOfDeparture(double& dep_hour, double& dep_min, bool& dep_AM) {

	//Retrieves AM or PM
	int is_am;
	cout << "\nDEPARTURE TIME INFORMATION\n";
	cout << "Is the departure in AM or PM.\nEnter 1 for AM.\nEnter 2 for PM.\n";
	do {
		cout << "AM (1) or PM (2): ";
		cin >> is_am;
		if (is_am != 1 && is_am != 2) {
			cout << "ERROR: Please enter option 1 or 2.\n";
		}
	} while (is_am != 1 && is_am != 2);

	if (is_am == 1) {
		dep_AM = true;
	}
	else {
		dep_AM = false;
	}
	//Retrieves the hour.
	cout << "Please enter the departure time of the trip.\n";
	do {
		cout << "DEPARTURE TIME (hour): ";
		cin >> dep_hour;
		if (dep_hour > 12 || dep_hour < 1) {
			cout << "ERROR: Please enter hours between 1 - 12.\n";
		}
	} while (dep_hour > 12 || dep_hour < 1);
	//Retrieves the minutes.
	cout << "DEPARTURE TIME (minutes): ";
	do {
		cin >> dep_min;
		if (dep_min < 0 || dep_min > 59) {
			cout << "ERROR: Please enter minutes between 0 - 59.\n";
		}
	} while (dep_min < 0 || dep_min > 59);

	//Retrieves AM or PM
	
	return;
}

void timeOfArrival(double& arr_hour, double& arr_min, bool& arr_AM) {
	int is_am;
	cout << "\nARRIVAL TIME INFORMATION\n";
	cout << "Is the arrival in AM or PM.\nEnter 1 for AM.\nEnter 2 for PM.\n";
	do {
		cout << "AM (1) or PM (2): ";
		cin >> is_am;
		if (is_am != 1 && is_am != 2) {
			cout << "ERROR: Please enter option 1 or 2.\n";
		}
	} while (is_am != 1 && is_am != 2);
	if (is_am == 1) {
		arr_AM = true;
	}
	else {
		arr_AM = false;
	}
	//Retrieves the hour
	cout << "Please enter the arrival time of the trip.\n";
	do {
		cout << "ARRIVAL TIME (hour): ";
		cin >> arr_hour;
		if (arr_hour > 12 || arr_hour < 1) {
			cout << "ERROR: Please enter hours between 1 - 12.\n";
		}
	} while (arr_hour > 12 || arr_hour < 1);
	//Retrieves the minutes
	cout << "ARRIVAL TIME (minutes): ";
	do {
		cin >> arr_min;
		if (arr_min < 0 || arr_min > 59) {
			cout << "ERROR: Please enter minutes between 0 - 59.\n";
		}
	} while (arr_min < 0 || arr_min > 59);

	return;
}

void roundTripFare(double& round_trip_fare) {
	cout << "\nROUND TRIP INFORMATION\n";
	cout << "Please enter the round-trip airfare.\n";
	cout << "ROUND-TRIP AIRFARE: $";
	do {
		cin >> round_trip_fare;
		if (round_trip_fare < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (round_trip_fare < 0);
	return;
}
void carRentalExpense(double& car_rental_expense) {
	cout << "\nCAR RENTAL INFORMATION\n";
	cout << "Please enter the expense for car rentals.\n";
	do {
		cout << "CAR RENTAL: $";
		cin >> car_rental_expense;
		if (car_rental_expense < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (car_rental_expense < 0);
	return;
}
void privateCar(double& miles_driven_expense) {
	double miles_price = 0.27;
	cout << "\nPRIVATE CAR INFORMATION\n";
	cout << "Please enter the miles driven on the private vehicle.\n";
	do {
		cout << "MILES DRIVEN: ";
		cin >> miles_driven_expense;
		if (miles_driven_expense < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (miles_driven_expense < 0);
	miles_driven_expense *= miles_price;
	return;
}

void parkingFees(double& total_parking_fees_owed, double& total_parking_fees, int days) {
	int fees_days;
	double parking_fees;
	int fees_owed = 0;
	total_parking_fees_owed = 0;
	total_parking_fees = 0;
	cout << "\nPARKING FEE INFORMATION\n";
	cout << "How many days did you incur parking fees?\n";
	do {
		cout << "PARKING FEE DAYS: ";
		cin >> fees_days;
		if (fees_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (fees_days < 0) {
			cout << "Please enter a positive number.\n";
		}
	} while (fees_days > days || fees_days < 0);
		cout << "Please enter parking fees for those days.\n";

	for (int i = 0; i < fees_days; i++) {

		do {
			cout << "PARKING FEES DAY " << i+1 << ": $";
			cin >> parking_fees;
			if (parking_fees < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (parking_fees < 0);
		
		if (parking_fees > 6) {
			fees_owed = parking_fees - 6;
			total_parking_fees_owed += fees_owed;
		}
		
		total_parking_fees += parking_fees;
	}
	return;
}

void taxiFare(double& total_taxi_fees_owed, double& total_taxi_fare, int days) {

	int taxi_days;
	double taxi_fare, fees_owed = 0;
	total_taxi_fees_owed = 0;
	total_taxi_fare = 0;

	cout << "\nTAXIE FARE INFORMATION\n";
	cout << "How many days out of the trip was a taxi used?\n";
	do { //Will acquire the number of days that taxis were used. Won't accept days more than the trip length. Wont accept less than 0
		cout << "TAXI DAYS: ";
		cin >> taxi_days;
		if (taxi_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (taxi_days < 0) {
			cout << "Please enter a positive number.\n";
		}
	} while (taxi_days > days || taxi_days < 0);

	cout << "Please enter parking fees for those days.\n";
	for (int i = 0; i < taxi_days; i++) {

		do { //Will acquire cost of the taxi fare. Won't accept anything less than 0.
			cout << "TAXI FEES DAY " << i + 1 << ": $";
			cin >> taxi_fare;
			if (taxi_fare < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (taxi_fare < 0);
		if (taxi_fare > 10) { //if the taxi costs are more than $10 then the individual payes the difference;
			fees_owed = taxi_fare - 10;
			total_taxi_fees_owed += fees_owed;
		}
		else if (taxi_fare <= 10) { //if the taxi costs $10 or less then the individual doesn't owe anything
			fees_owed = 0;
			total_taxi_fees_owed += fees_owed;
		}
		total_taxi_fare += taxi_fare;
	}
}

void registrationFees(double& registration_fees) {
	cout << "\nREGISTRATION FEE INFORMATION\n";
	cout << "Please enter any conference or seminar registration fees.\n";
	do {
		cout << "REGISTRATION FEES: $";
		cin >> registration_fees;
		if (registration_fees < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (registration_fees < 0);
	return;
}

void hotelExpenses(double& hotel_expenses_owed, double& total_hotel_expenses, int days) {
	int hotel_days;
	double expense_owed;
	double hotel_rate;
	hotel_expenses_owed = 0;
	total_hotel_expenses = 0;
	cout << "\nHOTEL EXPENSE INFORMATION\n";
	cout << "Please enter the number of nights spent in a hotel.\n";
	do {
		cout << "HOTEL DAYS: ";
		cin >> hotel_days;
		if (hotel_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (hotel_days < 1) {
			cout << "Please enter a positive number greater than 1.\n";
		}

	} while (hotel_days > days || hotel_days < 1);

	cout << "Please enter the nightly stay rate at the hotel.\n";
	for (int i = 0; i < hotel_days; i++) {
		do {
			cout << "HOTEL RATE DAY " << i+1 <<": $";
			cin >> hotel_rate;
			if (hotel_rate < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (hotel_rate < 0);

		if (hotel_rate > 90) { // If hotel is more than $90 the idividiual owes the difference;
			expense_owed = hotel_rate - 90;
			hotel_expenses_owed += expense_owed;
		}
		else if (hotel_rate <= 90) { // If hotel expense is less than $90 the individual owes nothing
			expense_owed = 0;
			hotel_expenses_owed += expense_owed;
		}
		total_hotel_expenses += hotel_rate;
	}
	return;
}

void foodExpenses(double& food_expenses_owed, double& total_food_expenses, double arr_hour, double dep_hour, bool arr_AM, bool dep_AM) {
	int num_meal;
	bool arr_check = true, dep_check = true;

	double dep_meal_cost, arr_meal_cost;
	double meal_credit = 0;
	double meal_cost;
	food_expenses_owed = 0;
	total_food_expenses = 0;

	cout << "\nMEAL EXPENSE INFORMATION\n";
	cout << "How many meals were eaten during the business trip.\n";
	cout << "NUMBER OF MEALS: ";
	cin >> num_meal;


	cout << "Please enter the cost of each meal.\n";
	for (int i = 0; i < num_meal; i++) {
		if (dep_check == true) {
			cout << "Please enter the meal cost for the departure date.\n";
			cout << "DEPARTURE MEAL COST: $";
			if (dep_AM == true) {
				if (dep_hour < 7) { // breakfast
					meal_credit = 9;
				}
				else if (dep_hour >= 7 && dep_hour < 12) { //lunch
					meal_credit = 12;
				}
			}
			else if (dep_AM == false) {
				if (dep_hour < 6) { //dinner
					meal_credit = 16;
				}
				else {
					meal_credit = 0;
				}
			}
			cin >> dep_meal_cost;

			total_food_expenses += dep_meal_cost; //collects the total food expenses value

			if (dep_meal_cost < meal_credit) { //If the meal costs less than the credit. The meal be set to 0 for the amount owed.
				meal_credit = 0;
				dep_meal_cost -= meal_credit;
			}
			else if (dep_meal_cost > meal_credit) { //If the meal cost is greater than the credit. The idividual owes the difference.
				dep_meal_cost -= meal_credit;
			}
			dep_check = false; //The IF statement won't execute again since this check sets it to FALSE;
			i++; //Counts this as one meal
		}
		cout << "Please enter the meal cost for the arrival date.\n";
		cout << "ARRIVAL MEAL COST: $";
		if (arr_check == true) {
			if (arr_AM == true){ //AM
				if (arr_hour > 8 && arr_hour < 12) { //breakfast
					meal_credit = 12;
				}
			}
			else if (arr_check == false) { //PM
				if (arr_hour < 1 && arr_hour >= 12) { //breakfast
					meal_credit = 9;
				}
				else if(arr_hour >= 1 && arr_hour < 7) { //lunch
					meal_credit = 12;
				}
				else if (arr_hour >= 7 && arr_hour < 12) { //dinner
					meal_credit = 16;
				}
		}
		cin >> arr_meal_cost;

		total_food_expenses += arr_meal_cost; //collects the total food expenses value

		if (arr_meal_cost < meal_credit) { //If the meal costs less than the credit. The meal be set to 0 for the amount owed.
			meal_credit = 0;
			arr_meal_cost -= meal_credit;
		}
		else if (arr_meal_cost > meal_credit) { //If the meal cost is greater than the credit. The idividual owes the difference.
			arr_meal_cost -= meal_credit;
		}
		arr_check = false; //The IF statement won't execute again since this check sets it to FALSE;
		i++; //Counts this as one meal
		}

		cout << "\nPlease enter the other meals.\n";
		cout << "OTHER MEAL (" << i+1<< "): $";
		cin >> meal_cost;
		total_food_expenses += meal_cost;
		food_expenses_owed += meal_cost;

	}
	food_expenses_owed += (arr_meal_cost + dep_meal_cost);
	return;
}

void totalExpenses(double& total_expense, double round_trip_fare, double car_rental_expense, double miles_driven_expense,
	double total_parking_fees, double total_taxi_fare, double registration_fees, double total_hotel_expenses,
	double total_food_expenses) {
	
	int width = 30;
	cout << "\nTOTAL TRIP EXPENSE INFORMATION\n";

	cout << setprecision(2) << showpoint << fixed;

	cout << setw(width) << left << "TOTAL ROUND TRIP FARE" <<": $" << round_trip_fare << endl;

	cout << setw(width) << left << "TOTAL CAR RENTAL EXPENSE" << ": $" << car_rental_expense << endl;

	cout << setw(width) << left << "TOTAL MILES DRIVEN EXPENSE" << ": $" << miles_driven_expense << endl;

	cout << setw(width) << left << "TOTAL PARKING FEES" << ": $" << total_parking_fees << endl;

	cout << setw(width) << left << "TOTAL TAXI FARE" << ": $" << total_taxi_fare << endl;

	cout << setw(width) << left << "TOTAL REGISTRATION FEES" << ": $" << registration_fees << endl;

	cout << setw(width) << left << "TOTAL HOTEL EXPENSES" << ": $" << total_hotel_expenses << endl;

	cout << setw(width) << left << "TOTAL FOOD EXPENSES" << ": $" << total_food_expenses << endl;

	cout << setw(width) << left << "" << "   -------" << endl;

	total_expense = round_trip_fare + car_rental_expense + miles_driven_expense + total_parking_fees + 
		total_taxi_fare + registration_fees + total_hotel_expenses + total_food_expenses;

	cout << setw(width) << left << "GRAND TOTAL" << ": $" << total_expense << endl;

	return;
}

void totalOwed(double& total_owed, double total_parking_fees_owed, double total_taxi_fees_owed, double hotel_expenses_owed, double food_expenses_owed) {
	int width = 30;
	total_owed = total_parking_fees_owed + total_taxi_fees_owed + hotel_expenses_owed + food_expenses_owed;

	cout << setprecision(2) << showpoint << fixed;
	cout << setw(width) << left << "INDIVIDUAL OWES" << ": $" << total_owed << endl;

	return;
}
*/
