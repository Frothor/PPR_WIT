# 2 Pętle

## 2.2.2 Fibonacci: Ciąg Fibonacciego - bitcoin

Ciąg Fibonacciego zaczyna się od wyrazów 0 i 1, a każdy następny jest sumą dwóch poprzednich. Napisz
program **fibonacci**, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą *n* i drukuje na
standardowe wyjście *n* pierwszych wyrazów ciągu Fibonacciego. Program załącza tylko plik nagłówkowy
**iostream**.

### Przykładowe wykonanie
```
In: 10
Out: 0 1 1 2 3 5 8 13 21 34
```


## 2.2.21 Minimum: Najmniejsza liczba - bitcoin

Napisz program **minimum**, który czyta ze standardowego wejścia liczby rzeczywiste do napotkania końca
pliku i wypisuje na standardowe wyjście najmniejszą z nich. Jeżeli nie wprowadzono żadnej liczby, program
nic nie wypisuje. Program załącza tylko plik nagłówkowy **iostream**.

### Przykładowe wykonanie
```
In: 23.5 7.16 2 -1.3 -7 0.13 -1.3 28 -7 23.5
Out: -7
```


## 2.2.31 Coin: Rzut oszukaną monetą - bitcoin

Napisz funkcję **coin** symulującą rzut oszukaną monetą. Funkcja przyjmuje prawdopodobieństwo wyrzu-
cenia orła i zwraca prawdę jeśli wypadł orzeł albo fałsz jeśli reszka. Funkcja powinna być przystosowana
do użycia w przykładowym programie poniżej. Funkcja korzysta tylko z pliku nagłówkowego **cstdlib**.

### Przykładowy program
```c++
int main() {
std::srand(std::time(nullptr));
for (int counter = 0; counter < 10; ++counter) {
std::cout << (coin(0.2) ? "heads" : "tails") << " "; }
std::cout << std::endl; }
```

### Przykładowe wykonanie
```
Out: heads heads tails tails heads tails tails tails tails tails
```