Лабораторная работa по ООП №1.

1)	Создание нового репозитория на GitHub c именем first_lab 
2)	URL репозитория https://github.com/Veronika272/first_lab.git
3)	Работаю в Git Bush.
4)	Перехожу в директорию где хочу сохранить репозиторий (cd С):
5)	Клонирую репозиторий (git clone https://github.com/Veronika272/first_lab.git)
6)	Перехожу в директорию репозитория (cd first_lab)
7)	Создаю в корне репозитория директорию src (mkdir src)
8)	Перехожу в директорию src (cd src)
9)	Создаю файл main.cpp (touch main.cpp)
10)	Создаю файл utils.cpp (touch utils.cpp)
11)	Создаю файл utils.hpp (touch utils.hpp)
12)	Работая в Visual Studio добавляю в файлы код.
13)	В main.cpp
14)	В utils.cpp
15)	В utils.hpp:
16)	Возвращаюсь в корневую директорию репозитория (cd ..)
17)	Создаю файл CMakeLists.txt (touch CMakeLists.txt)
18)	Открываю CMakeLists.txt и добавляю код.
19)	Собираю проект с помощью CMake.
20)	Создаю директорию build для сборки (mkdir build)
21)	Перехожу в эту директорию (cd build)
22)	Убеждаюсь, что проект успешно собирается с помощью CMake
(cmake ..
cmake –build .)
23)	Проект успешно собрался.
24)	Возвращаюсь в корневую директорию репозитория /C/first_lab (cd ..)
25)	Инициализирую Git репозиторий в корне проекта (git init)
26)	Проверяю какие там файлы и что с ними (git status)
27)	Добавляю все файлы в репозиторий (git add .)
28)	Делаю первый коммит с сообщением "Initial commit: CMake project setup". (git commit -m "Initial commit: CMake project setup")
29)	Связываюсь с удалённым репозиторием (git remote add origin https://github.com/Veronika272/first_lab.git (если понадобиться))
30)	Отправляю изменения на удалённый репозиторий (git push origin main)
31)	Создаю новую ветку с именем featureutils (git checkout -b featureutils)
32)	Добавление новой функции в utils.cpp.
33)	Обновляю файл main.cpp.
34)	Добавляю изменения в их индекс (git add src/)
35)	Делаю коммит с сообщением (git commit -m "feat: Add multiplication function to utils")
36)	Отправка изменений на удалённый репозиторий (git push origin featureutils)
37)	Переключаюсь обратно на основную ветку main (git checkout main)
38)	В основной ветке вношу изменения в main.cpp.
39)	Добавляю изменения в индекс (git add src/)
40)	Коммичу изменения с сообщением (git commit -m "fx: Update main output message in main branch")
41)	Отправляю изменения на удалённый репозиторий (git push origin main)
42)	Пытаюсь слить ветку featureutils в основную ветку (git merge featureutils)
43)	Добавляю изменённые файлы (git add .)
44)	Завершаю слияние коммитом (git commit -m "Branches merging" (либо не надо))
45)	Отправляю все ветки и коммиты в удаленный репозиторий (git push --all origin)
