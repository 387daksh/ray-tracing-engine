#ifndef INTERVAL_H
#define INTERVAL_H

class interval{
    public:
        double min,max;
        interval():min(+infinity),max(-infinity){}
        interval(double min,double max):(min(min),max(max)){}
        double size(){
            return max-min;
        }
        bool contains(double x){
            return (x>=min && x<=max);
        }
        bool surrounds(double x){
            return (x>min&&x<min);
        }
        static incline const interval empty=interval(+infinity, -infinity);
        static incline const interval universe=interval(-infinity, +infinity);
}
#endif