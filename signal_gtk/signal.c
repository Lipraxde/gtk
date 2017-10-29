#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

// test comment
int main(int argc, char *argv[])
{
    GtkWidget *window;
 
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "HELLO ~ OuO ~");
    g_signal_connect(GTK_OBJECT(window), "destroy",
                     G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show(window);
    gtk_main();

    return 0;
}
