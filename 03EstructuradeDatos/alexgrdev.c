#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

#define MAX_CONTACTS 100
#define PHONE_LENGTH 12  // 11 digits + 1 for null terminator

// Estructura de contacto
typedef struct {
    char name[50];
    char phone[PHONE_LENGTH];
} Contact;

// Lista de contactos
Contact contacts[MAX_CONTACTS];
int contact_count = 0;

// Función para validar si un número de teléfono es válido
int is_valid_phone(const char* phone) {
    if (strlen(phone) != 9) {
        return 0;
    }
    for (int i = 0; i < 9; i++) {
        if (!isdigit(phone[i])) {
            return 0;
        }
    }
    return 1;
}

// Función para agregar un nuevo contacto
void add_contact() {
    if (contact_count >= MAX_CONTACTS) {
        printf("Agenda llena, no se pueden agregar más contactos.\n");
        return;
    }

    Contact new_contact;
    printf("Ingrese el nombre del contacto: ");
    scanf(" %[^\n]", new_contact.name);

    char phone[PHONE_LENGTH];
    do {
        printf("Ingrese el número de teléfono (9 dígitos): ");
        scanf("%s", phone);
        if (!is_valid_phone(phone)) {
            printf("Número de teléfono inválido. Asegúrese de que sea numérico y tenga 11 dígitos.\n");
        }
    } while (!is_valid_phone(phone));

    strcpy(new_contact.phone, phone);
    contacts[contact_count++] = new_contact;
    printf("Contacto agregado exitosamente.\n");
}

// Función para buscar un contacto por nombre
void search_contact() {
    char name[50];
    printf("Ingrese el nombre del contacto a buscar: ");
    scanf(" %[^\n]", name);

    int found = 0;
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Contacto encontrado: %s - %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contacto no encontrado.\n");
    }
}

// Función para actualizar un contacto
void update_contact() {
    char name[50];
    printf("Ingrese el nombre del contacto a actualizar: ");
    scanf(" %[^\n]", name);

    int found = 0;
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Contacto encontrado. Ingrese el nuevo número de teléfono (11 dígitos): ");
            char phone[PHONE_LENGTH];
            do {
                scanf("%s", phone);
                if (!is_valid_phone(phone)) {
                    printf("Número de teléfono inválido. Asegúrese de que sea numérico y tenga 11 dígitos.\n");
                }
            } while (!is_valid_phone(phone));

            strcpy(contacts[i].phone, phone);
            printf("Contacto actualizado exitosamente.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contacto no encontrado.\n");
    }
}

// Función para eliminar un contacto
void delete_contact() {
    char name[50];
    printf("Ingrese el nombre del contacto a eliminar: ");
    scanf(" %[^\n]", name);

    int found = 0;
    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < contact_count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contact_count--;
            printf("Contacto eliminado exitosamente.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contacto no encontrado.\n");
    }
}

// Función para mostrar el menú y gestionar las operaciones
void menu() {
    int option;

    do {
        printf("\n---- Menú ----\n");
        printf("1. Insertar contacto\n");
        printf("2. Buscar contacto\n");
        printf("3. Actualizar contacto\n");
        printf("4. Eliminar contacto\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                add_contact();
                break;
            case 2:
                search_contact();
                break;
            case 3:
                update_contact();
                break;
            case 4:
                delete_contact();
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opción no válida, intente nuevamente.\n");
        }
    } while (option != 5);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}
