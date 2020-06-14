# 7 Lambdy

## 7.2.7 Transform: Transformacja elementów - bitcoin

Napisz funkcję **transform**, która przyjmuje niemodyfikujący iterator początkowy i końcowy wycinka wek-
tora liczb całkowitych, iterator początkowy innego wycinka, oraz funktor przyjmujący i zwracający liczbę
całkowitą. Funkcja wpisuje do kolejnych komórkek drugiego wycinka wyniki wywołania tego funktora na
kolejnych elementach pierwszego wycinka. Funkcja zwraca iterator końcowy drugiego wycinka. Funkcja
powinna być przystosowana do użycia w przykładowym programie poniżej. Funkcja nie używa indeksów
korzysta tylko z plików nagłówkowych **functional** i **vector**.

### Przykładowy program
```c++
int main() {
const std::vector<int> vector1 {-7, 5, 1, 2, 11};
std::vector<int> vector2(5);
auto result = transform(vector1.cbegin(), vector1.cend(), vector2.begin(),
[](int element) {return element * element; });
for (auto iterator = vector2.cbegin(); iterator < result;) {
std::cout << *iterator++ << " "; }
std::cout << std::endl; }
```

### Wykonanie
```
Out: 49 25 1 4 121
```

## 7.2.8 Remove If: Usuwanie warunkowe - bitcoin

Napisz funkcję **remove_if**, która przyjmuje początkowy i końcowy iterator wycinka wektora liczb całko-
witych oraz funktor przyjmujący liczbę całkowitą i zwracający wartość logiczną. Funkcja usuwa z wycinka
wszystkie elementy, na których funktor ten zwraca prawdę, przesuwając pozostałe elementy odpowiednio
w lewo. Funkcja zwraca iterator końcowy wycinka zawierającego wszystkie przesunięte elementy. Funkcja
powinna być przystosowana do użycia w przykładowym programie poniżej. Funkcja nie używa indeksów
i korzysta tylko z plików nagłówkowych **functional** i **vector**.

### Przykładowy program
```c++
int main() {
std::vector<int> vector {-7, 5, 2, 2, 11, 2, 3};
auto result = remove_if(vector.begin(), vector.end(),
[](int element) {return element < 3; });
for (auto iterator = vector.cbegin(); iterator < result;) {
std::cout << *iterator++ << " "; }
std::cout << std::endl; }
```

### Wykonanie
```
Out: 5 11 3
```