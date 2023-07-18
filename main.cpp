#include <iostream>
#include <math.h>
#include <vector>

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

public: 

double radius;

double area(){
return M_PI*radius*radius;
}
};

class Point {
  public:

  double x;
  double y;
  //double x2;
  //double y2;
Point(double w, double e){
  x = w;
  y = e;
}
  double distance_to_origin(){
    return sqrt(x*x + y*y);
}

  double distance_to_point(Point A){
    return sqrt(pow((A.x-x),2) + pow((A.y-y),2));
}  
};

class Line {
  public:
  Point p1;
  Point p2;
  
  double length(Point p1, Point p2){
    return sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
  }
  double distance_to_point(Point A){
    double tangent_line = -(p2.x-p1.x)/(p2.y-p1.y);
    double infinite_line = (p2.y-p1.y)/(p2.x-p1.x);
    double tanb = p2.y - tangent_line*p2.x;
    double infib = A.y -infinite_line*A.x;
    double dist = (infib-tanb)/(tangent_line-infinite_line);
    return dist;
  }
};

  class Triangle{
    public:
    Point p1;
    Point p2;
    Point p3;
  double trigarea(Point p1, Point p2, Point p3){
    return .5*abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y));
  }
  };
  class Polygon{
    public: 
    std::vector<Point> poly_points;
    Polygon (std::vector<Point> &c):c(c) {
      poly_points = c;
    }
    double area() {
      double area = 0;
      for (int i = 1; i < c.size()-1; i++){
          //trigarea c = trigarea(poly_points[0], poly_points[i], poly_points[i+1]);
          area += Triangle(c[0], c[i], c[i+1]).area();
      }
      return area;
    }

    
    //for (int i=0, i++){

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
