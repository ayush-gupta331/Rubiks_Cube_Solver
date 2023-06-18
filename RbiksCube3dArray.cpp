//
// Created by Ayush Gupta on 18/06/23.
//
#include "generic_header_rubics.h"

class RubiksCube3dArray : public RubiksCube  {
private:

    void rotateface(int ind) {
        char temp_arr[3][3] = {};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++ ){
                temp_arr[i][j]= cube[ind][i][j];
            }
        }
        for(int i=0;i <3; it++) cube[ind][0][i] = temp_arr[2-i][0];
        for(int i=0;i <3; it++) cube[ind][i][2] = temp_arr[0][i];
        for(int i=0;i <3; it++) cube[ind][2][2-i] = temp_arr[i][2];
        for(int i=0;i <3; it++) cube[ind][2-i][0] = temp_arr[2][2-i];

    }
public:
    char cube[6][3][3]{}
};
