#include <iostream>
#include <gtkmm.h>
#include "..\include\gdatastockmarket.hpp"

int main(int argc, char** argv) {

    auto app = Gtk::Application::create(argc, argv);

    Gtk::Window window;
    window.set_default_size(600,400);

    GDataStocksMarket a = GDataStocksMarket();
    a.updateStocksByReadingFile();
    a.toString();
    return app->run(window);
}