#include "settings.h"

struct movie {
    char* name = new char[50];
    string directors[10];
    string genres[5];
    float rate;
    int count_directors;
    int count_genres;
};

void SetMovie(movie& m) {
    int symbols = 50;
    cout << "Enter movie name: ";
    gets_s(m.name, symbols);
    cout << "Enter count of directors: ";
    cin >> m.count_directors;
    if (m.count_directors < 1 || m.count_directors > 10) {
        throw "Incorrect count!";
    }
    for (int i = 0; i < m.count_directors; i++) {
        cout << "Enter the director's last name #" << i + 1 << ": ";
        cin >> m.directors[i];
    }
    cout << "Enter count of genres: ";
    cin >> m.count_genres;
    if (m.count_directors < 1 || m.count_directors > 5) {
        throw "Incorrect count!";
    }
    for (int i = 0; i < m.count_genres; i++) {
        cout << "Enter the genre #" << i + 1 << ": ";
        cin >> m.genres[i];
    }
    cout << "Enter middle movie rate: ";
    cin >> m.rate;
    system("cls");
}

void PrintMovieInfo(const movie& m) {
    cout << "\"" << m.name << "\" (rate: " << m.rate << ")\n";
    cout << "Genre: ";
    for (int i = 0; i < m.count_genres; i++) {
        cout << m.genres[i];
        if (i + 1 != m.count_genres)
            cout << ", ";
    }
    cout << "\n\nDirectors: ";
    for (int i = 0; i < m.count_directors; i++) {
        cout << m.directors[i];
        if (i + 1 != m.count_directors)
            cout << ", ";
    }
    cout << "\n";
}

int main()
{
    movie mine;
    SetMovie(mine);
    PrintMovieInfo(mine);
    Sleep(INFINITE);
}