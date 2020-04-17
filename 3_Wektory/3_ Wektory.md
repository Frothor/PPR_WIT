# 3 Wektory

## 3.2.3 Fraction: Część całkowita i ułamkowa - bitcoin

Napisz funkcję **fraction**, która przyjmuje nieujemną liczbę rzeczywistą oraz referencje dwóch zmiennych
rzeczywistych i wpisuje do nich całkowitą oraz ułamkową część podanej liczby. Funkcja powinna być przy-
stosowana do użycia w przykładowym programie poniżej. Funkcja korzysta tylko z pliku nagłówkowego
**cmath**.

### Przykładowy program
```c++
int main() {
double integral, fractional;
fraction(integral, fractional, 3.14159);
std::cout << integral << " " << fractional << std::endl; }
```

### Wykonanie
```
Out: 3 0.14159
```

## 3.2.15 Selection Sort: Sortowanie przez wybór - bitcoin

Sortowanie wektora w kolejności niemalejącej przez wybór przebiega następująco. Znajdujemy w wektorze
pierwszy element najmniejszy i zamieniamy go z pierwszym elementem wektora. Następnie powtarzamy
te czynności dla wektora bez pierwszego elementu i tak dalej. Napisz program **selection_sort**, który
czyta ze standardowego wejścia liczby całkowite do napotkania końca pliku i sortuje je niemalejąco przez
wybór. Program wypisuje na standardowe wyjście w kolejnych liniach sortowane liczby po każdej zamianie.
Program załącza tylko pliki nagłówkowe **iostream** i **vector**.

### Przykładowe wykonanie
```
In: 3 7 -1 12 -5 7 10
Out: -5 7 -1 12 3 7 10
Out: -5 -1 7 12 3 7 10
Out: -5 -1 3 12 7 7 10
Out: -5 -1 3 7 12 7 10
Out: -5 -1 3 7 7 12 10
Out: -5 -1 3 7 7 10 12
Out: -5 -1 3 7 7 10 12
```

## 3.2.27 Intersection: Część wspólna zbiorów - bitcoin

Napisz funkcję **intersection**, która przyjmuje stałe referencje dwóch uporządkowanych rosnąco wek-
torów liczb całkowitych i zwraca uporządkowany rosnąco wektor liczb zawartych w obu tych wektorach
jednocześnie. Funkcja powinna być przystosowana do użycia w przykładowym programie poniżej. Funkcja
korzysta tylko z pliku nagłówkowego **vector**.

### Przykładowy program
```c++
int main () {
for (int element: intersection(std::vector<int> {-7, 2, 3, 7, 15, 18, 23},
std::vector<int> {-8, 3, 5, 8, 15, 23, 30})) {
std::cout << element << " "; }
std::cout << std::endl; }
```

### Wykonanie
```
Out: 3 15 23
```