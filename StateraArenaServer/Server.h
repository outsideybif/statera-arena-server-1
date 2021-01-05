#pragma once
class Server
{
public:
    Server(boost::asio::io_service& io_service, short port);
    void handleReceiveFrom(const boost::system::error_code& error, size_t bytes_recvd);
    void handleSendTo(const boost::system::error_code& error, size_t bytes_sent);

private:
    boost::asio::io_service& io_service_;
    udp::socket socket_;
    udp::endpoint sender_endpoint_;
    enum { max_length = 1024 };
    char data_[max_length];
};

