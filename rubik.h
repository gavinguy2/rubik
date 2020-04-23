#ifndef _RUBIK_H_
#define _RUBIK_H_
#include <iostream>
#include <vector>
#include <string>

class Rubik {
    public:
    Rubik();
    void initial();
    std::vector<int> getCube() const;
    void solvedCube();
    void show();
    void rotateW();
    void rotateG();
    void rotateR();
    void rotateB();
    void rotateO();
    void rotateY();
    
    void rotateWcc();
    void rotateGcc();
    void rotateRcc();
    void rotateBcc();
    void rotateOcc();
    void rotateYcc();
    
    int getWCenter();
    int getGCenter();
    int getRCenter();
    int getBCenter();
    int getOCenter();
    int getYCenter();
    
    bool operator==(const Rubik& rhs) const;
    bool operator<(const Rubik& rhs) const;
    
    int isEqual(Rubik& rhs)  ;
    
    private:
    std::vector<int> cube;
};

#endif /* _RUBIK_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
