# Тема 1 Правильный многоугольник.
Абстрактный базовый класс Правильный многоугольник (Polygon), который имеет следующие виртуальные методы: сериализация в строку ToString(), расчёта площади и периметра фигуры, радиуса описанной вокруг многоугольника окружности, метод чтения из стандартного потока ввода (read), а также операторы ввода и вывода.
Реализовать класс Конкретный многоугольник (по вариантам, название взять из варианта). Предусмотреть создание многоугольника как посредством задания его вершин, которые имеют тип Точка (Point), так и посредством задания вершин парами чисел (абсцисса, ордината). Переопределить операторы сдвига влево (вывод в поток), операторы «равно» и «не равно». Определить статический метод сериализация в строку ToString(). Предусмотреть невозможность создания объекта при несоблюдении правил создания многоугольника на плоскости (сторона многоугольника должна быть неотрицательным числом). Данное требование удобнее реализовать, использовав сравнение координат типа Точка. Определить статический метод чтения из стандартного потока ввода, использующий переопределённый оператор сдвига вправо для класса Точка.
Для класса Точка переопределить операторы сдвига влево, вправо и операторы сравнения.
## Вариант 3 Пентагон
