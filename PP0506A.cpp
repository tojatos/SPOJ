#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
struct Point
{
	string name;
	int x, y;
	Point(){};
	Point(string p_name, int p_x, int p_y) : name(p_name), x(p_x), y(p_y) {};
};
struct DistanceIndex
{
	int index;
	float distance;
	DistanceIndex(){};
	DistanceIndex(int index, float distance) : index(index), distance(distance) {};
};
void sort_points(Point **, int, Point ***);
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
			int n;
			cin >> n;
			Point **points = new Point *[n];
			for (int i = 0; i < n; i++)
			{
				string name;
				int x;
				int y;
				cin >> name >> x >> y;
				points[i] = new Point(name, x, y);
			}
			// std::cout << "Przed: " << points<< '\n';
			sort_points(points, n, &points);
			// std::cout << "Po: " << points << '\n';
			for (int i = 0; i < n; i++)
			{
				Point curr_point = *points[i];
				std::cout << curr_point.name << " ";
				std::cout << curr_point.x << " ";
				std::cout << curr_point.y << "\n";
			}
			std::cout << '\n';
			cin.get();
		}
    return 0;
}
void sort_points(Point **points, int size, Point ***points_adress)
{
	Point **sorted_points = new Point *[size];
	DistanceIndex **distanceIndexes = new DistanceIndex *[size];
	float distances[size];
	for (int i = 0; i < size; i++)
	{
		float distance;
		Point curr_point = *points[i];
		distance = sqrt(pow(curr_point.x, 2)+pow(curr_point.y, 2));
		distanceIndexes[i] = new DistanceIndex(i, distance);
		distances[i] = distance;
	}
	sort(distances, distances + size);
	for (int i = 0; i < size; i++)
	{
	     float curr_distance = distances[i];
			 for (int j = 0; j < size; j++)
			 {
			      DistanceIndex curr_distanceIndex = *distanceIndexes[j];
						if(curr_distanceIndex.distance == curr_distance)
						{
							//std::cout << "Distance: " << curr_distance << '\t' << "Point name: " << (*points[j]).name << '\n';
							sorted_points[i] = points[j];
							break;
						}
			 }
	}
	// std::cout << "=================" << '\n';
	// std::cout << "Sorted: " << '\n';
	// std::cout << &sorted_points << '\n';
	// std::cout << "Points: " << '\n';
	// std::cout << points_adress << '\n';
	// std::cout << "=================" << '\n';
	*points_adress = sorted_points;
}
