
#include "includes.h"

#include "Server.h"
#include "Character.h"
#include "Actor.h"
#include "Room.h"

boost::thread some_thread;
Room* room;

boost::asio::io_service io_service_timer;
boost::posix_time::milliseconds interval(20);  // 1 second
boost::asio::deadline_timer timer(io_service_timer, interval);

void update_room(const boost::system::error_code& /*e*/)
{
    room->update();
    room->serialize();

    // Reschedule the timer for 1 second in the future:
    timer.expires_at(timer.expires_at() + interval);
    // Posts the timer event
    timer.async_wait(update_room);
}




int main(int argc, char* argv[])
{
    try
    {
        Character* vlad = new Actor();
        vlad->set_name("Vlad obiknoveniiy");

        Character* vladVlad = new Actor();
        vladVlad->set_name("Vlad Vlad");

        Character* bot1 = new Bot();
        bot1->set_name("Bot 1");

        Character* bot2 = new Bot();
        bot2->set_name("Bot 2");

        Character* bot3 = new Bot();
        bot3->set_name("Bot 3");

        Character* bot4 = new Bot();
        bot4->set_name("Bot 4");

        room = new Room();
        room->add_character(vlad);
        room->add_character(vladVlad);

        room->add_character(bot1);
        room->add_character(bot2);
        room->add_character(bot3);
        room->add_character(bot4);


        timer.async_wait(update_room);
        boost::thread_group threads;
        threads.create_thread(boost::bind(&boost::asio::io_service::run, &io_service_timer));



        boost::asio::io_service io_service;
        Server s(io_service, 32331);
        io_service.run();


    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}