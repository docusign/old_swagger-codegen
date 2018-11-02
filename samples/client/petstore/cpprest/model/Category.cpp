/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Category.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Category::Category()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Category::~Category()
{
}

void Category::validate()
{
    // TODO: implement validation
}

web::json::value Category::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

void Category::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
}

void Category::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
}

void Category::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
}

int64_t Category::getId() const
{
    return m_Id;
}


void Category::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Category::idIsSet() const
{
    return m_IdIsSet;
}

void Category::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Category::getName() const
{
    return m_Name;
}


void Category::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Category::nameIsSet() const
{
    return m_NameIsSet;
}

void Category::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

