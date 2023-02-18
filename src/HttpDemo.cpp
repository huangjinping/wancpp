//
// Created by 胡慧杰 on 2023/2/17.
//

#include "HttpDemo.h"
#include "HTTPRequest.hpp"
#include "json.cpp"

using json = nlohmann::json;

//https://blog.csdn.net/Blejixiang/article/details/127830555
void http01() {
    cout << "http01" << endl;
    string uri = "http://35.81.164.129:8769/getVersionInfo";
    string method = "POST";
    auto protocol = http::InternetProtocol::v4;
    http::Request request{uri, protocol};
    json responseJson;
    try {
        const auto response = request.send(method, "", {
                {"Content-Type", "application/json"},
                {"User-Agent",   "runscope/0.1"},
                {"Accept",       "*/*"}
        }, std::chrono::seconds(2));
        cout << "====exception====>>0>>" << endl;
        responseJson = json::parse(string{response.body.begin(), response.body.end()});
        cout << string{response.body.begin(), response.body.end()} << endl;

        cout << responseJson["code"] << endl;
        cout << responseJson["msg"] << endl;

        json jData = responseJson["data"];
        cout << jData["updatePackageUrl"] << endl;

    } catch (exception &e) {
        //捕捉请求失败异常，处理
        cout << "====exception====>>2>>" << e.what() << endl;
    }

}


void ::HttpDemo::start() {
    cout << "httpDemo  start" << endl;
    http01();

}