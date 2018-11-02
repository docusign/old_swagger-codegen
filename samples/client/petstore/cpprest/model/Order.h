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

/*
 * Order.h
 *
 * An order for a pets from the pet store
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Order_H_
#define IO_SWAGGER_CLIENT_MODEL_Order_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// An order for a pets from the pet store
/// </summary>
class  Order
    : public ModelBase
{
public:
    Order();
    virtual ~Order();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Order members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getPetId() const;
    bool petIdIsSet() const;
    void unsetPetId();
    void setPetId(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    bool quantityIsSet() const;
    void unsetQuantity();
    void setQuantity(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getShipDate() const;
    bool shipDateIsSet() const;
    void unsetShipDate();
    void setShipDate(utility::datetime value);
    /// <summary>
    /// Order Status
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isComplete() const;
    bool completeIsSet() const;
    void unsetComplete();
    void setComplete(bool value);

protected:
    int64_t m_Id;
    bool m_IdIsSet;
    int64_t m_PetId;
    bool m_PetIdIsSet;
    int32_t m_Quantity;
    bool m_QuantityIsSet;
    utility::datetime m_ShipDate;
    bool m_ShipDateIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    bool m_Complete;
    bool m_CompleteIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Order_H_ */
