#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <stdexcept>

class Customer {
private:
    int customerID;
    std::string customerName;
    std::string customerAddress;
    std::string phoneNo;
    std::string emailAddress;
    std::string connectionType;
    int num3PhaseMetersPrepaid;
    int num3PhaseMetersPostpaid;
    int numSinglePhaseMetersPrepaid;
    int numSinglePhaseMetersPostpaid;
    double totalLoad;
    double latitude;
    double longitude;
    time_t startDate;
    time_t expiryDate;

    std::time_t parseDate(const std::string& dateStr) {
        std::tm t = {};
        std::istringstream ss(dateStr);
        ss >> std::get_time(&t, "%Y-%m-%d");
        if (ss.fail()) {
            throw std::runtime_error("Failed to parse date string: " + dateStr);
        }
        std::time_t timeResult = mktime(&t);
        if (timeResult == -1) {
            throw std::runtime_error("mktime failed for date string: " + dateStr);
        }
        return timeResult;
    }

    std::string formatDate(time_t timeVal) const {
        std::tm ltm;
        if (localtime_r(&timeVal, &ltm)) {
            std::stringstream ss;
            ss << std::put_time(&ltm, "%Y-%m-%d");
            return ss.str();
        } else {
            return "Invalid Date";
        }
    }

public:
    Customer(int id, const std::string& name, const std::string& address, const std::string& phone,
             const std::string& email, const std::string& connection, int pre3, int post3, int pre1, int post1,
             double load, double lat, double lon, const std::string& start, const std::string& expiry)
             : customerID(id), customerName(name), customerAddress(address), phoneNo(phone),
               emailAddress(email), connectionType(connection), num3PhaseMetersPrepaid(pre3), num3PhaseMetersPostpaid(post3),
               numSinglePhaseMetersPrepaid(pre1), numSinglePhaseMetersPostpaid(post1), totalLoad(load), latitude(lat),
               longitude(lon) {
        try {
            startDate = parseDate(start);
            expiryDate = parseDate(expiry);
    } catch (const std::runtime_error& e) {
            throw;
    }
}

    std::string getCustomerName() const { return customerName; }

    void printCustomerInfo() const {
        std::cout << "Customer ID: " << customerID << std::endl;
        std::cout << "Customer Name: " << customerName << std::endl;
        std::cout << "Customer Address: " << customerAddress << std::endl;
        std::cout << "Phone Number: " << phoneNo << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
        std::cout << "Connection Type: " << connectionType << std::endl;
        std::cout << "3-Phase Prepaid Meters: " << num3PhaseMetersPrepaid << std::endl;
        std::cout << "3-Phase Postpaid Meters: " << num3PhaseMetersPostpaid << std::endl;
        std::cout << "Single-Phase Prepaid Meters: " << numSinglePhaseMetersPrepaid << std::endl;
        std::cout << "Single-Phase Postpaid Meters: " << numSinglePhaseMetersPostpaid << std::endl;
        std::cout << "Total Load: " << totalLoad << std::endl;
        std::cout << "Latitude: " << latitude << std::endl;
        std::cout << "Longitude: " << longitude << std::endl;
        std::tm ltmStart;
        localtime_r(&startDate, &ltmStart);
        std::cout << "Start Date: " << std::put_time(&ltmStart, "%Y-%m-%d") << std::endl;
        std::tm ltmExpiry;
        localtime_r(&expiryDate, &ltmExpiry);
        std::cout << "Expiry Date: " << std::put_time(&ltmExpiry, "%Y-%m-%d") << std::endl;
    }

    void setCustomerName(const std::string& name) { customerName = name; }
    void setCustomerAddress(const std::string& address) {customerAddress = address;}

    void saveToCSV(const std::string& filePath) const {
        std::ofstream file;
        std::ifstream checkFile(filePath);
        bool fileExists = checkFile.good();
        checkFile.close();

        if (!fileExists) {
            file.open(filePath);
            if (!file.is_open()) {
                throw std::runtime_error("Could not open file for writing: " + filePath);
            }
            file << "CustomerID,CustomerName,CustomerAddress,PhoneNo,EmailAddress,ConnectionType,"
                 << "Num3PhaseMetersPrepaid,Num3PhaseMetersPostpaid,NumSinglePhaseMetersPrepaid,NumSinglePhaseMetersPostpaid,"
                 << "TotalLoad,Latitude,Longitude,StartDate,ExpiryDate\n";
        } else {
             file.open(filePath, std::ios::app);
             if (!file.is_open()) {
                throw std::runtime_error("Could not open file for appending: " + filePath);
            }
        }

        file << customerID << ","
             << customerName << ","
             << customerAddress << ","
             << phoneNo << ","
             << emailAddress << ","
             << connectionType << ","
             << num3PhaseMetersPrepaid << ","
             << num3PhaseMetersPostpaid << ","
             << numSinglePhaseMetersPrepaid << ","
             << numSinglePhaseMetersPostpaid << ","
             << totalLoad << ","
             << latitude << ","
             << longitude << ","
             << formatDate(startDate) << ","
             << formatDate(expiryDate) << "\n";

        file.close();
    }
};

int main() {
    std::string filePath;
    std::cout << "Enter the path to the CSV file: ";
    std::cin >> filePath;

    int numCustomers;
    std::cout << "Enter the number of customers to add: ";
    std::cin >> numCustomers;
    std::cin.ignore();

    for (int i = 0; i < numCustomers; ++i) {
    try {
            int id, pre3, post3, pre1, post1;
            double load, lat, lon;
            std::string name, address, phone, email, connection, start, expiry;

            std::cout << "\n--- Customer " << i + 1 << " ---" << std::endl;

            std::cout << "Enter Customer ID: ";
            std::cin >> id;
            std::cin.ignore();

            std::cout << "Enter Customer Name: ";
            std::getline(std::cin, name);

            std::cout << "Enter Customer Address: ";
            std::getline(std::cin, address);

            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, phone);

            std::cout << "Enter Email Address: ";
            std::getline(std::cin, email);

            std::cout << "Enter Connection Type: ";
            std::getline(std::cin, connection);

            std::cout << "Enter Number of 3-Phase Prepaid Meters: ";
            std::cin >> pre3;

            std::cout << "Enter Number of 3-Phase Postpaid Meters: ";
            std::cin >> post3;

            std::cout << "Enter Number of Single-Phase Prepaid Meters: ";
            std::cin >> pre1;

            std::cout << "Enter Number of Single-Phase Postpaid Meters: ";
            std::cin >> post1;

            std::cout << "Enter Total Load: ";
            std::cin >> load;

            std::cout << "Enter Latitude: ";
            std::cin >> lat;

            std::cout << "Enter Longitude: ";
            std::cin >> lon;
            std::cin.ignore();

            std::cout << "Enter Start Date (YYYY-MM-DD): ";
            std::getline(std::cin, start);

            std::cout << "Enter Expiry Date (YYYY-MM-DD): ";
            std::getline(std::cin, expiry);
            Customer customer(id, name, address, phone, email, connection, pre3, post3, pre1, post1, load, lat, lon, start, expiry);
            customer.printCustomerInfo();
            customer.saveToCSV(filePath);

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}

    return 0;

}
