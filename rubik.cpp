#include "rubik.h"

Rubik::Rubik(){

	std::vector<int> cube;
    
}

void Rubik::initial(){
    
    cube.clear() ;
    size_t i ;
    
       std::string nCube = "" ;
            int vAdded = 0;
            while (vAdded < 53 )
		{
			std::getline(std::cin,nCube);           
            
            size_t j = nCube.size();
            for(i = 0; i<j; i++){
                if((nCube[i]) == 'w'){
                    if(nCube[i+1] == 'h'){
                        
                        vAdded++;
                    cube.push_back(0);}
                }
                else if((nCube[i]) == 'g'){
                    if(nCube[i+1] == 'r'){
                        
                        vAdded++;
                        cube.push_back(1);
                    }
                    
                }
                else if((nCube[i]) == 'r'){
                    if(nCube[i+1] == 'e'){
                        if(nCube[i+2] == 'd'){
                            vAdded++;
                            cube.push_back(2);
                        }
                    }
                }
                else if((nCube[i]) == 'b'){
                    if(nCube[i+1] == 'l'){
                        vAdded++;
                    cube.push_back(3);}
                }
                else if((nCube[i]) == 'o'){
                    if(nCube[i+1] == 'r'){
                        vAdded++;
                    cube.push_back(4);}
                }
                else if((nCube[i]) == 'y'){
                    if(nCube[i+1] == 'e'){
                        vAdded++;
                    cube.push_back(5);}
                }
             
         
            }}
    
}

std::vector<int> Rubik::getCube() const{
    return cube;
}

void Rubik::solvedCube(){
    cube.clear();
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    cube.push_back(0);
    
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    cube.push_back(1);
    
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    cube.push_back(2);
    
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    cube.push_back(3);
    
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    cube.push_back(4);
    
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
    cube.push_back(5);
}


void Rubik::show(){
    size_t cSize = cube.size();
    std::cout<<std::endl;
    //size_t i = 0;
    int counter = 0;
    int counter2 = 0;
    for(size_t i = 0; i < cSize; i++){
        if(cube[i] == 3){
            std::cout << "blue " ;
            counter += 1;
            counter2 += 1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        
        else if(cube[i] == 2){
            std::cout << "red " ;
            counter += 1;
            counter2 +=1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        else if(cube[i] == 0){
            std::cout << "white " ;
            counter += 1;
            counter2 += 1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        else if(cube[i] == 4){
            std::cout << "orange " ;
            counter += 1;
            counter2 += 1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        else if(cube[i] == 1){
            std::cout << "green " ;
            counter += 1;
            counter2 += 1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        else if(cube[i] == 5){
            std::cout << "yellow " ;
            counter += 1;
            counter2 +=1;
            if(counter == 3){
                std::cout << std::endl;
                counter = 0;
            }
            if(counter2 == 9){
                std::cout << std::endl;
                counter2 = 0;
            }
        }
        
    }
}

void Rubik::rotateW(){
    // WHITE SIDE
    int w0 = cube[0];
    int w1 = cube[1];
    int w2 = cube[2];
    int w3 = cube[3];
    int w5 = cube[5];
    int w6 = cube[6];
    int w7 = cube[7];
    int w8 = cube[8];
    
    cube[0] = w6;
    cube[1] = w3;
    cube[2] = w0;
    cube[3] = w7;
    cube[5] = w1;
    cube[6] = w8;
    cube[7] = w5;
    cube[8] = w2;

    //Saving colors used
    int b27 = cube[27];
    int b28 = cube[28];
    int b29 = cube[29];
    
    int o36 = cube[36];
    int o37 = cube[37];
    int o38 = cube[38];
    
    int g9 = cube[9];
    int g10 = cube[10];
    int g11 = cube[11];
    
    int r18 = cube[18];
    int r19 = cube[19];
    int r20 = cube[20];
    
    //Red Side 
    cube[18] = b27;
    cube[19] = b28;
    cube[20] = b29;
    
    //green side
    cube[9] = r18;
    cube[10] = r19;
    cube[11] = r20;
    
    //orange side
    cube[36] = g9;
    cube[37] = g10;
    cube[38] = g11;
    
    //blue side
    cube[27] = o36;
    cube[28] = o37;
    cube[29] = o38;

}

void Rubik::rotateG(){
    
    // Green SIDE
    int g9 = cube[9];
    int g10 = cube[10];
    int g11 = cube[11];
    int g12 = cube[12];
    int g14 = cube[14];
    int g15 = cube[15];
    int g16 = cube[16];
    int g17 = cube[17];
    
    cube[9] = g15;
    cube[10] = g12;
    cube[11] = g9;
    cube[12] = g16;
    cube[14] = g10;
    cube[15] = g17;
    cube[16] = g14;
    cube[17] = g11;

    //Saving colors used
    int w0 = cube[0];
    int w3 = cube[3];
    int w6 = cube[6];
    
    int o38 = cube[38];
    int o41 = cube[41];
    int o44 = cube[44];
    
    int y45 = cube[45];
    int y48 = cube[48];
    int y51 = cube[51];
    
    int r18 = cube[18];
    int r21 = cube[21];
    int r24 = cube[24];
    
    //Red Side 
    cube[18] = w0;
    cube[21] = w3;
    cube[24] = w6;
    
    //yellow Side
    cube[45] = r18;
    cube[48] = r21;
    cube[51] = r24;
    
    //orange side
    cube[38] = y51;
    cube[41] = y48;
    cube[44] = y45;
    
    //white side
    cube[0] = o44;
    cube[3] = o41;
    cube[6] = o38;
 
}
void Rubik::rotateR(){
    // RED SIDE
    int r18 = cube[18];
    int r19 = cube[19];
    int r20 = cube[20];
    int r21 = cube[21];
    int r23 = cube[23];
    int r24 = cube[24];
    int r25 = cube[25];
    int r26 = cube[26];
    
    cube[18] = r24;
    cube[19] = r21;
    cube[20] = r18;
    cube[21] = r25;
    cube[23] = r19;
    cube[24] = r26;
    cube[25] = r23;
    cube[26] = r20;

    //Saving colors used
    int b27 = cube[27];
    int b30 = cube[30];
    int b33 = cube[33];
    
    int y45 = cube[45];
    int y46 = cube[46];
    int y47 = cube[47];
    
    int g11 = cube[11];
    int g14 = cube[14];
    int g17 = cube[17];
    
    int w6 = cube[6];
    int w7 = cube[7];
    int w8 = cube[8];
    
    //yellow Side 
    cube[45] = b33;
    cube[46] = b30;
    cube[47] = b27;
    
    //green side
    cube[11] = y45;
    cube[14] = y46;
    cube[17] = y47;
    
    //white side
    cube[6] = g17;
    cube[7] = g14;
    cube[8] = g11;
    
    //blue side
    cube[27] = w6;
    cube[30] = w7;
    cube[33] = w8;

}
void Rubik::rotateB(){
    // BLUE SIDE
    int b27 = cube[27];
    int b28 = cube[28];
    int b29 = cube[29];
    int b30 = cube[30];
    int b32 = cube[32];
    int b33 = cube[33];
    int b34 = cube[34];
    int b35 = cube[35];
    
    cube[27] = b33;
    cube[28] = b30;
    cube[29] = b27;
    cube[30] = b34;
    cube[32] = b28;
    cube[33] = b35;
    cube[34] = b32;
    cube[35] = b29;

    //Saving colors used
    int w2 = cube[2];
    int w5 = cube[5];
    int w8 = cube[8];
    
    int o36 = cube[36];
    int o39 = cube[39];
    int o42 = cube[42];
    
    int y47 = cube[47];
    int y50 = cube[50];
    int y53 = cube[53];
    
    int r20 = cube[20];
    int r23 = cube[23];
    int r26 = cube[26];
    
    //Red Side 
    cube[20] = y47;
    cube[23] = y50;
    cube[26] = y53;
    
    //white side
    cube[2] = r20;
    cube[5] = r23;
    cube[8] = r26;
    
    //orange side
    cube[36] = w8;
    cube[39] = w5;
    cube[42] = w2;
    
    //yellow side
    cube[47] = o42;
    cube[50] = o39;
    cube[53] = o36;

}
void Rubik::rotateO(){
    // ORANGE SIDE
    int o36 = cube[36];
    int o37 = cube[37];
    int o38 = cube[38];
    int o39 = cube[39];
    int o41 = cube[41];
    int o42 = cube[42];
    int o43 = cube[43];
    int o44 = cube[44];
    
    cube[36] = o42;
    cube[37] = o39;
    cube[38] = o36;
    cube[39] = o43;
    cube[41] = o37;
    cube[42] = o44;
    cube[43] = o41;
    cube[44] = o38;

    //Saving colors used
    int b29 = cube[29];
    int b32 = cube[32];
    int b35 = cube[35];
    
    int w0 = cube[0];
    int w1 = cube[1];
    int w2= cube[2];
    
    int g9 = cube[9];
    int g12 = cube[12];
    int g15 = cube[15];
    
    int y51 = cube[51];
    int y52 = cube[52];
    int y53 = cube[53];
    
    //white Side 
    cube[0] = b29;
    cube[1] = b32;
    cube[2] = b35;
    
    //green side
    cube[9] =  w2;
    cube[12] = w1;
    cube[15] = w0;
    
    //yellow side
    cube[51] = g9;
    cube[52] = g12;
    cube[53] = g15;
    
    //blue side
    cube[29] = y53;
    cube[32] = y52;
    cube[35] = y51;

}
void Rubik::rotateY(){
    // WHITE SIDE
    int y45 = cube[45];
    int y46 = cube[46];
    int y47 = cube[47];
    int y48 = cube[48];
    int y50 = cube[50];
    int y51 = cube[51];
    int y52 = cube[52];
    int y53 = cube[53];
    
    cube[45] = y51;
    cube[46] = y48;
    cube[47] = y45;
    cube[48] = y52;
    cube[50] = y46;
    cube[51] = y53;
    cube[52] = y50;
    cube[53] = y47;

    //Saving colors used
    int b33 = cube[33];
    int b34 = cube[34];
    int b35 = cube[35];
    
    int o42 = cube[42];
    int o43 = cube[43];
    int o44 = cube[44];
    
    int g15 = cube[15];
    int g16 = cube[16];
    int g17 = cube[17];
    
    int r24 = cube[24];
    int r25 = cube[25];
    int r26 = cube[26];
    
    //Red Side 
    cube[24] = g15;
    cube[25] = g16;
    cube[26] = g17;
    
    
    cube[15] = o42;
    cube[16] = o43;
    cube[17] = o44;
    
    //orange side
    cube[42] = b33;
    cube[43] = b34;
    cube[44] = b35;
    
    //blue side
    cube[33] = r24;
    cube[34] = r25;
    cube[35] = r26;

}

void Rubik::rotateWcc(){
    rotateW();
    rotateW();
    rotateW();
}
void Rubik::rotateGcc(){
    rotateG();
    rotateG();
    rotateG();
}
void Rubik::rotateRcc(){
    rotateR();
    rotateR();
    rotateR();
}
void Rubik::rotateBcc(){
    rotateB();
    rotateB();
    rotateB();
}
void Rubik::rotateOcc(){
    rotateO();
    rotateO();
    rotateO();
}
void Rubik::rotateYcc(){
    rotateY();
    rotateY();
    rotateY();
}

int Rubik::getWCenter(){
    return cube[4];
}
int Rubik::getGCenter(){
    return cube[13];
}
int Rubik::getRCenter(){
    return cube[22];
}
int Rubik::getBCenter(){
    return cube[31];
}
int Rubik::getOCenter(){
    return cube[40];
}
int Rubik::getYCenter(){
    return cube[49];
}

bool Rubik::operator==(const Rubik& rhs) const {
    size_t i ;
    size_t iSize = cube.size();
    for(i = 0; i < iSize; i++){
            if (cube[i] != rhs.getCube()[i]){
                return false;
            }
        
    }
    return true;
}
bool Rubik::operator<(const Rubik& rhs) const{
    size_t i ;
    size_t iSize = cube.size();
    for(i = 0; i < iSize; i++){
        
            if (cube[i] != rhs.getCube()[i]){
                return false;
    
    }
    return true;
    
}
}
int Rubik::isEqual( Rubik& rhs)  {
    rhs.initial();
    size_t i ;
    size_t iSize = cube.size();
    for(i = 0; i < iSize; i++){
            if (cube[i] != (rhs.getCube())[i]){
                std::cout<<"FALSE"<<std::endl;
                return 0;
            }
        
    }
    std::cout<<"TRUE"<<std::endl;
    return 0;
    
}
  