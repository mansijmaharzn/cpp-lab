# Points for some programs

## Conversion Formulas
### Temperature Conversion
```
(30°C x 1.8) + 32 = 86 °F
(5.0/9.0) * (50°F - 32.0) = 10 °C;
```

### Add Two Times
```
(Time &obj1, Time &obj2) {
    sec = obj1.sec + obj2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + obj1.min + obj2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr+obj1.hr + obj2.hr;
}
```

## Reversing
### Reverse Number
[example](reversing/reverseNumber.cpp)
```
int n, reverse=0, remainder;
while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
}
// variable n is the number to be reversed
```


### Reverse Array
[example](reversing/reverseArray.cpp)
```
int temp, start=0, end=5-1;
while(start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
// end=(total-1), cuz index starts from 0
```

## Overloading
### Function Overloading
[examples](../lab-2)

### Operator Overloading
[example](overloading/opOverloading.cpp)
```
In Class -> public:
Distance operator+(Distance d1) {
    Distance temp;
    temp.feet = d1.feet + feet;
    temp.inch = d1.inch + inch;
    return temp;
}
IN -> main() {
    d3 = d1 + d2;
}
```

### Operator Overloading Using Friend Function
[example](overloading/opoverloadFriend.cpp)
```
In Class -> friend Distance operator+(Distance, Distance);

SEPERATELY -> Distance operator+(Distance d1, Distance d2) {
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;
    return temp;
}

IN -> main() {
    d3 = d1+d2;
}
```

## Templates
### Function Template
[example](templates/functionTemplate.cpp)
```
template<class T> // T supports any type of datatype
void show(T a, T b) {
    cout << "a: " << a << "\tb: " << b << endl;
}
// calling is done normally and variables can be passed of any dataType like float, int, char, etc
```
### Class Template
[example](templates/classTemplate.cpp)  
Just like Function Template but in class. Focus on object creation part!