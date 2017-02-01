#include "allegro5/allegro.h"
#include "allegro5/allegro_primitives.h"
int main(int argc, char **argv) {
	ALLEGRO_DISPLAY*display = NULL;
	al_init();
	al_init_primitives_addon();
	display = al_create_display(500, 500);//add numbers
	al_clear_to_color(al_map_rgb(500, 0, 500));

	al_draw_triangle(50, 100, 200, 300, 50, 400, al_map_rgb(0, 0, 500), 10);

	al_draw_triangle(25, 50, 100, 150, 200, 500, al_map_rgb(0, 50, 0), 10);
	al_draw_triangle(500, 10, 200, 300, 50, 400, al_map_rgb(0, 500, 500), 10);

	al_flip_display();
	al_rest(20);//add number
	al_destroy_display(display);
}