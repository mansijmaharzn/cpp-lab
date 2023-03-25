# Points for some programs

## Conversion Formulas
### Temperature Conversion
```
(30°C x 1.8) + 32 = 86 °F
(50°F - 32) x .5556 = 10 °C
```

## Reversing
### Reverse Number
[example](reverseNumber.cpp)
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
[example](reverseArray.cpp)
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
### Operator Overloading
[example](opOverloading.cpp)
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
[example](opoverloadFriend.cpp)
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