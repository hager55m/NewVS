#include "Station.h"
#include <QFile>
#include <QTextStream>
#include "Graph.h"

std::vector <Station> stations;
Station::Station()
{
	lines;
}

Station::Station(std::string name, std::vector< int>line)
	: name(name), lines(line) {}

std::vector<int >Station::getLines() {
	return lines;
}

void Station::setName(std::string Nname)
{
	name = Nname;
}

std::string Station::getName()const
{
    return name;
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
