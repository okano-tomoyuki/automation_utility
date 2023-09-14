/**
 * @file company.hpp
 * @author okano tomoyuki (okano.development@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef _SHARE_COMPANY_HPP_
#define _SHARE_COMPANY_HPP_

#include <string>
#include <vector>

/** 共通変数用名前空間 */
namespace Share
{

/** 会社構造体 */
struct Company
{
    /** 社員構造体 */
    struct Person
    {
        int id;                                     /** 8桁の社員ID */
        std::string name;                           /** フルネーム "苗字 名前" */
        std::string email;                          /** メールアドレス "aaa.bbb@ccc.jp" */
        double tall;                                /** 身長[cm] */
        double weight;                              /** 体重[kg] */
    };

    /** 部署構造体 */
    struct Department
    {
        /** グループ構造体 */
        struct Group
        {
            int id;                                 /** 4桁のグループID */
            std::string name;                       /** グループ名 */
            Person leader;                          /** グループ長 */
            std::vector<Person> member;             /** 課員 */
        };
        int id;                                     /** 4桁の部署ID */
        std::string name;                           /** 部署名 */
        Person leader;                              /** 部署長 */
        std::vector<Group> groups;                  /** 傘下のグループ */
    };

    int id;                                         /** 4桁の会社ID */
    std::string name;                               /** 会社名 */
    Person president;                               /** 社長 */
    std::vector<Department> departments;            /** 傘下の部署 */
};

} // Share

#endif