#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "stb_image.h"
#include "stb_image_write.h"

#include <stdio.h>
#include <stdlib.h>

// Create a simple test image (RGB)
void crearImagenPrueba(const char *filename) {
    int width = 200;
    int height = 200;
    int channels = 3;
    
    unsigned char *data = malloc(width * height * channels);
    
    // Create a colorful test pattern
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int index = (y * width + x) * channels;
            
            // Create a gradient pattern with different colors
            data[index + 0] = (unsigned char)(255 * x / width);     // Red gradient
            data[index + 1] = (unsigned char)(255 * y / height);    // Green gradient  
            data[index + 2] = (unsigned char)(128 + 127 * ((x + y) % 2)); // Blue checkerboard
        }
    }
    
    // Save the test image
    stbi_write_jpg(filename, width, height, channels, data, 90);
    printf("Imagen de prueba creada: %s\n", filename);
    
    free(data);
}

// Convertir RGB a escala de grises
unsigned char convertirAGris(unsigned char r, unsigned char g, unsigned char b) {
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);
}

void convertirJPGaBlancoNegro(const char *input_filename, const char *output_filename) {
    int width, height, channels;

    // Leer la imagen JPG (con 3 canales: RGB)
    unsigned char *img = stbi_load(input_filename, &width, &height, &channels, 3);
    if (img == NULL) {
        fprintf(stderr, "Error al cargar la imagen: %s\n", input_filename);
        return;
    }

    printf("Imagen cargada: %dx%d pixeles, %d canales\n", width, height, channels);

    // Crear nueva imagen en escala de grises (RGB)
    unsigned char *img_bn = malloc(width * height * 3);
    if (img_bn == NULL) {
        fprintf(stderr, "No se pudo asignar memoria\n");
        stbi_image_free(img);
        return;
    }

    for (int i = 0; i < width * height; i++) {
        unsigned char r = img[i * 3 + 0];
        unsigned char g = img[i * 3 + 1];
        unsigned char b = img[i * 3 + 2];

        unsigned char gris = convertirAGris(r, g, b);
        img_bn[i * 3 + 0] = gris;
        img_bn[i * 3 + 1] = gris;
        img_bn[i * 3 + 2] = gris;
    }

    // Guardar imagen como JPG
    if (!stbi_write_jpg(output_filename, width, height, 3, img_bn, 90)) {
        fprintf(stderr, "Error al guardar la imagen: %s\n", output_filename);
    } else {
        printf("Imagen convertida y guardada en: %s\n", output_filename);
    }

    // Liberar memoria
    stbi_image_free(img);
    free(img_bn);
}

int main() {
    const char *archivo_entrada = "prueba_color.jpg";
    const char *archivo_salida = "prueba_bn.jpg";

    printf("Creando imagen de prueba...\n");
    crearImagenPrueba(archivo_entrada);
    
    printf("Iniciando conversión de %s a escala de grises...\n", archivo_entrada);
    convertirJPGaBlancoNegro(archivo_entrada, archivo_salida);

    printf("Proceso completado. Revisa los archivos:\n");
    printf("- Imagen original: %s\n", archivo_entrada);
    printf("- Imagen en escala de grises: %s\n", archivo_salida);

    return 0;
}//cambie la imagen por una q tenia
