#include <vector>
#include <iostream>
#include "rubik.h"
#include <string>

int main(){
    
    Rubik r;
    Rubik c;
    std::string input;
    while (getline(std::cin, input) && input != "quit"){
        
        if (input == "initial"){
            r.initial();
        }
        else if (input == "show"){
            r.show();
        }
        else if (input == "rotate white cw"){
            if (r.getWCenter() == 0){
                r.rotateW();}
            else if (r.getGCenter() == 0){
                r.rotateG();}
            else if (r.getRCenter() == 0){
                r.rotateR();}
            else if (r.getBCenter() == 0){
                r.rotateB();}
            else if (r.getOCenter() == 0){
                r.rotateO();}
            else if (r.getYCenter() == 0){
                r.rotateY();}
        }
        else if (input == "rotate white ccw"){
            if (r.getWCenter() == 0){
                r.rotateWcc();}
            else if (r.getGCenter() == 0){
                r.rotateGcc();}
            else if (r.getRCenter() == 0){
                r.rotateRcc();}
            else if (r.getBCenter() == 0){
                r.rotateBcc();}
            else if (r.getOCenter() == 0){
                r.rotateOcc();}
            else if (r.getYCenter() == 0){
                r.rotateYcc();}
        }
         else if (input == "rotate green cw"){
            if (r.getWCenter() == 1){
                r.rotateW();}
            else if (r.getGCenter() == 1){
                r.rotateG();}
            else if (r.getRCenter() == 1){
                r.rotateR();}
            else if (r.getBCenter() == 1){
                r.rotateB();}
            else if (r.getOCenter() == 1){
                r.rotateO();}
            else if (r.getYCenter() == 1){
                r.rotateY();}
        }
        else if (input == "rotate green ccw"){
            if (r.getWCenter() == 1){
                r.rotateWcc();}
            else if (r.getGCenter() == 1){
                r.rotateGcc();}
            else if (r.getRCenter() == 1){
                r.rotateRcc();}
            else if (r.getBCenter() == 1){
                r.rotateBcc();}
            else if (r.getOCenter() == 1){
                r.rotateOcc();}
            else if (r.getYCenter() == 1){
                r.rotateYcc();}
        }
         else if (input == "rotate red cw"){
            if (r.getWCenter() == 2){
                r.rotateW();}
            else if (r.getGCenter() == 2){
                r.rotateG();}
            else if (r.getRCenter() == 2){
                r.rotateR();}
            else if (r.getBCenter() == 2){
                r.rotateB();}
            else if (r.getOCenter() == 2){
                r.rotateO();}
            else if (r.getYCenter() == 2){
                r.rotateY();}
        }
        else if (input == "rotate red ccw"){
            if (r.getWCenter() == 2){
                r.rotateWcc();}
            else if (r.getGCenter() == 2){
                r.rotateGcc();}
            else if (r.getRCenter() == 2){
                r.rotateRcc();}
            else if (r.getBCenter() == 2){
                r.rotateBcc();}
            else if (r.getOCenter() == 2){
                r.rotateOcc();}
            else if (r.getYCenter() == 2){
                r.rotateYcc();}
        }
         else if (input == "rotate blue cw"){
            if (r.getWCenter() == 3){
                r.rotateW();}
            else if (r.getGCenter() == 3){
                r.rotateG();}
            else if (r.getRCenter() == 3){
                r.rotateR();}
            else if (r.getBCenter() == 3){
                r.rotateB();}
            else if (r.getOCenter() == 3){
                r.rotateO();}
            else if (r.getYCenter() == 3){
                r.rotateY();}
        }
        else if (input == "rotate blue ccw"){
            if (r.getWCenter() == 3){
                r.rotateWcc();}
            else if (r.getGCenter() == 3){
                r.rotateGcc();}
            else if (r.getRCenter() == 3){
                r.rotateRcc();}
            else if (r.getBCenter() == 3){
                r.rotateBcc();}
            else if (r.getOCenter() == 3){
                r.rotateOcc();}
            else if (r.getYCenter() == 3){
                r.rotateYcc();}
        }
        
         else if (input == "rotate orange cw"){
            if (r.getWCenter() == 4){
                r.rotateW();}
            else if (r.getGCenter() == 4){
                r.rotateG();}
            else if (r.getRCenter() == 4){
                r.rotateR();}
            else if (r.getBCenter() == 4){
                r.rotateB();}
            else if (r.getOCenter() == 4){
                r.rotateO();}
            else if (r.getYCenter() == 4){
                r.rotateY();}
        }
        else if (input == "rotate orange ccw"){
             if (r.getWCenter() == 4){
                r.rotateWcc();}
            else if (r.getGCenter() == 4){
                r.rotateGcc();}
            else if (r.getRCenter() == 4){
                r.rotateRcc();}
            else if (r.getBCenter() == 4){
                r.rotateBcc();}
            else if (r.getOCenter() == 4){
                r.rotateOcc();}
            else if (r.getYCenter() == 4){
                r.rotateYcc();}
        }
         else if (input == "rotate yellow cw"){
             if (r.getWCenter() == 5){
                r.rotateW();}
            else if (r.getGCenter() == 5){
                r.rotateG();}
            else if (r.getRCenter() == 5){
                r.rotateR();}
            else if (r.getBCenter() == 5){
                r.rotateB();}
            else if (r.getOCenter() == 5){
                r.rotateO();}
            else if (r.getYCenter() == 5){
                r.rotateY();}
        }
        else if (input == "rotate yellow ccw"){
            if (r.getWCenter() == 5){
                r.rotateWcc();}
            else if (r.getGCenter() == 5){
                r.rotateGcc();}
            else if (r.getRCenter() == 5){
                r.rotateRcc();}
            else if (r.getBCenter() == 5){
                r.rotateBcc();}
            else if (r.getOCenter() == 5){
                r.rotateOcc();}
            else if (r.getYCenter() == 5){
                r.rotateYcc();}
        }
        // take out new cube and put into is equal, read in white, green, ... instead of numbers
        else if (input == "isequal"){
            r.isEqual(c);
          
            
        }
      
    }
    
 
    return 0;
}