//
// Created by Asus on 06/05/2020.
//

double average(double array[], int size){
    double sum = 0;
    for(int i =0; i < size ; i++){
        sum += array[i];
    }
    return sum/size;

}

double max (double array[], int size){
    double max = 0;
    for(int i =0; i < size ; i++){
        if(max < array[i])
            max = array[i];
    }
    return max;

}



int maxi(double array[], int size){
    if (i1 > i2)
        return i1;
    else return i2;
}
