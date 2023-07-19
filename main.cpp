#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <array>

using namespace std;

  int subtract(int x, int y){
  return x - y;

  }
  int multiply(int x, int y){
    return x*y;
  }
  int divide(int x, int y){
    return x/y;
  }
class circle {


double radius;

double area(){
return M_PI*radius*radius;
}
};

class Point {
  //Q1: get the distance between 2 ponts 
  public:

  double x;
  double y;
  //double x2;
  //double y2;
Point(double w = 0, double e = 0){
  x = w;
  y = e;
}
  double distance_to_origin(){
    return sqrt(x*x + y*y);
}
// Q2 distance between 2 points 
  double distance_to_point(Point A){
    return sqrt(pow((A.x-x),2) + pow((A.y-y),2));
}  
};

class Line {
  public:
  Point p1;
  Point p2;
  //Q3 distance between 2 points but input as Point funciton
  double length(Point p1, Point p2){
    return sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
  }
  //Q4:distance from a point to line
  double distance_to_line(Point A){
    double tangent_line = -(p2.x-p1.x)/(p2.y-p1.y);
    double infinite_line = (p2.y-p1.y)/(p2.x-p1.x);
    double tanb = p2.y - tangent_line*p2.x;
    double infib = A.y -infinite_line*A.x;
    double dist = (infib-tanb)/(tangent_line-infinite_line);
    return dist;
  }
};

  class Triangle{
    private:
    Point p1;
    Point p2;
    Point p3;
    public:
    Triangle(Point &p1, Point &p2, Point &p3) {
      this->p1 = p1;
      this->p2 = p2;
      this->p3 = p3;
    }
 //:Q6 given the vertices of a triangle with 3 points, output the area of the triangle
  double area(){
    double trig_area = .5*abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y));
    return trig_area;
  }
  };

  class Polygon{
  //Q7: find the area of a polygon given Point number of vectors,
    private: 
    std::vector<Point> pp;
    public:

    Polygon(std::vector<Point> pp) {
      this->pp = pp;
    }

    double area() {
      double poly_area = 0;
      for (int i = 1; i<pp.size()-1; i++) {
          //trigarea c = trigarea(poly_points[0], poly_points[i], poly_points[i+1]);
          Triangle x(pp[0], pp[i], pp[i+1]);
          poly_area += x.area();
      }
      return poly_area;
    }
  double perimeter() {
    //find the perimeter of the polygon
    double poly_perimeter = 0;
    for (int i = 0; i<pp.size()-1; i++) {
      poly_perimeter += this->pp[this->pp.size()-1].distance_to_point(this->pp[0]);
      return poly_perimeter; 
    }
  }
    
    //for (int i=0, i++){
    };
  
  class AUV{
  private:
  std::string name;
  Point position;
  double depth;
  double heading;
  double speed[3];
  double angular_speed;
  public:
  AUV(std::string name, Point &position, double depth, double heading, double speed[3], double angular_speed){
    this->name = name;
    this->depth = depth;
    this->position = position; 
    this->heading = heading;
    this->speed [0] = speed [0]; //forward x
    this->speed [1] = speed [1]; //lateral y
    this->speed [2] = speed [2]; //vertical z
    this->angular_speed = angular_speed;
  }
  void step(double dt){
    position.x = speed[0]*dt + position.x;
    position.y = speed[1]*dt +position.y;
    depth += angular_speed*dt;
  }
  void apply_acceleration(double acceleration[3], double dt){
    speed[0] += acceleration[0]*dt;
    speed[1] += acceleration[1]*dt;
    speed[2] += acceleration[2]*dt;
    
  }
  void apply_angular_acceleration(double angular_acceleration, double dt){
    angular_speed += angular_acceleration*dt;
    
  }
  };

  
int main()
{
  std::cout << "Hello, world!" << std::endl;
  std::cout << "My name is Eddie and this is room 115" << std::endl;

  int x = 5;
  int y = 7;
  int z = 4;
  int w = 3;
  int v = 2;
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
  std::cout << "The sum of " <<x<<" and "<<y<<" and "<<z<<" is " << x + y +z << std::endl;
   std::cout << "The product of " <<x<<" and "<<y<<" and "<<z<<" and "<<w<<" is " << x * y *z *w<< std::endl;
    std::cout << "The quotient of " <<x<<" and "<<y<<" and "<<v<<" is " << x / y / v << std::endl;
    int q = multiply(x, y);
    int u = multiply(z, w);
    int r = multiply(q, u);
  int t = divide(x, y);
  int f = divide (t, v);
  //std::cout << <<q<<, <<u<<, <<r<<, <<t<<, <<f<< std::endl;

 return 0;


}
