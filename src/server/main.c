#include <fcgi_stdio.h>
#include <stdlib.h>

int main(void)
{
        while (FCGI_Accept() >= 0) {
        // Отправляем HTTP-заголовки
        printf("Content-Type: text/html\r\n");
        printf("Status: 200 OK\r\n");
        printf("\r\n");
        
        // Отправляем HTML-страницу
        printf("<html>\n");
        printf("<head><title>FastCGI Hello</title></head>\n");
        printf("<body>\n");
        printf("<h1>Hello, World!</h1>\n");
        printf("<p>This is FastCGI server on C</p>\n");
        printf("</body>\n");
        printf("</html>\n");
    }
    return 0;
}