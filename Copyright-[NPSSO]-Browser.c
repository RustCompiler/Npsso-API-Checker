#include <stdio.h>
#include <string.h>
#include <unistd.h>

void clear_terminal() {
#ifdef _WIN32
    system("cls");
#else
    printf("\033[H\033[J");
#endif
    fflush(stdout);
}

void add_top_margin(int lines) {
    for (int i = 0; i < lines; i++) {
        printf("\n");
    }
}

int main() {
    const char *text = "Thank you for supporting this project.\n\n"
                       "But the fact is that this is a project with private source code.\n"
                       "At the moment I do not plan to distribute the source code of this project.\n\n"
                       "But if I want to explain about the construction process,\n"
                       "I used the Pyqt6 library to create the main page\n\n"
                       "And using the object-oriented method, I decided to organize the project\n"
                       "And I used Selenium to open ChromeDriver\n\n"
                       "But during the construction process, I encountered a driver update problem, so I decided to consider a single version to continue\n\n"
                       "And I considered version 122 of chrome for distribution.";

    clear_terminal();
    add_top_margin(2);

    int total_length = strlen(text);

    for (int i = 0; i < total_length; i++) {
        putchar(text[i]);
        fflush(stdout);
        usleep(50000);
    }

    printf("\n\nthanks t.me/RustSeller\n");

    return 0;
}
