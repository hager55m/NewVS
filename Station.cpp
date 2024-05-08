#include "Station.h"
#include <QFile>
#include <QTextStream>
#include "Graph.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <QDebug>

using namespace std;
//std::vector <Station> stations;
QVector<Station> Station::All_stations;
Station::Station()
{
    lines = 0;
}

Station::Station(std::string name, int line)
    : name(name), lines(line) {}

int Station::getLines()
{

    return lines;
}

std::string Station::getName()const
{
    return name;
}

void Station::Read_Staion()
{
    ifstream file ("C:/Users/user/Downloads/data_staion.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string Name_str,Line_str;
        getline(ss, Name_str, ',');
        getline(ss, Line_str, ',');
        int line_int=std::stoi(Line_str);
        All_stations.push_back(Station(Name_str,line_int));
    }
    file.close();
}

void Station::Write_Staion()
{
    ofstream outFile("C:/Users/user/Downloads/data_staion.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }
    for(const auto& it :All_stations){

        outFile<<it.name<<','<<it.lines<<endl;
    }
outFile.close();
}

void Station::readstations(){
    QFile file(":/images/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        //qDebug() << "Failed to open the file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() == 2) {
            QString stationName = parts[0];
            int lineNumber = parts[1].toInt(); // Convert the string to an integer
            // Now you can store the stationName and lineNumber in your data structure
            // For example, you can create Station objects and store them in a vector
            Station newStation(stationName.toStdString(), lineNumber);
            stations.push_back(newStation);
        } else {
            //qDebug() << "Invalid line format:" << line;
        }
    }
    file.close();

    for(const auto& path : Station::stations){
        Graph::addStation(path.name, path.lines);
    }
    for (int i = 0; i < Station::stations.size() -1; ++i) {
        if(Station::stations[i].lines == Station::stations[i+1].lines)
        Graph::addEdge(Station::stations[i], Station::stations[i+1]);
    }
}
