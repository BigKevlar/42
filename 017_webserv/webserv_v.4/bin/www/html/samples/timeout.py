#!/usr/bin/python3

print("Status: 200 OK\r")
print("Content-Type: text/html\r")
print("Content-Length:131\r\n\r")

print("<html><body>")
print("<h1>Hola, mundo desde Python CGI!</h1>")
while True: pass
print("<p>Este es un mensaje de prueba desde un script Python CGI.</p>")
print("</body></html>")
