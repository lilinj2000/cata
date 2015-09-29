#ifndef CTP_FIELD_MESSAGE_HH_
#define CTP_FIELD_MESSAGE_HH_

#include "Message.hh"
#include "ThostFtdcUserApiStruct.h"
#include "FtdcUserApiStructPrint.hh"
#include "soil/boost.hh"
#include <iostream>
#include <cstring>
#include <stdexcept>

namespace ctp
{

class FieldMessage : public Message
{
  public:
    virtual Message* toReturnMessage() = 0;

    virtual Message* toResponseMessage() = 0;

    virtual ~FieldMessage() {};

};

class DisseminationFieldMessage : public FieldMessage
{
  public:
    DisseminationFieldMessage(const CThostFtdcDisseminationField* disseminationfieldmessage):
      type_(DISSEMINATIONFIELDMESSAGE)
    {
      memset(&disseminationfieldmessage_, 0x0, sizeof(disseminationfieldmessage_));

      if( disseminationfieldmessage )
      {
        memcpy(&disseminationfieldmessage_, disseminationfieldmessage, sizeof(disseminationfieldmessage_));
      }
    }

    virtual ~DisseminationFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type DisseminationFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type DisseminationFieldMessage not support this function");
    }

    CThostFtdcDisseminationField disseminationfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DisseminationFieldMessage const& aDisseminationFieldMessage)
{
    os <<std::endl;
    os <<"## DisseminationFieldMessage ##" <<std::endl;
    os <<aDisseminationFieldMessage.disseminationfieldmessage_; 
    os <<"## end DisseminationFieldMessage ##" <<std::endl;
}

class ReqUserLoginFieldMessage : public FieldMessage
{
  public:
    ReqUserLoginFieldMessage(const CThostFtdcReqUserLoginField* requserloginfieldmessage):
      type_(REQUSERLOGINFIELDMESSAGE)
    {
      memset(&requserloginfieldmessage_, 0x0, sizeof(requserloginfieldmessage_));

      if( requserloginfieldmessage )
      {
        memcpy(&requserloginfieldmessage_, requserloginfieldmessage, sizeof(requserloginfieldmessage_));
      }
    }

    virtual ~ReqUserLoginFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqUserLoginFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqUserLoginFieldMessage not support this function");
    }

    CThostFtdcReqUserLoginField requserloginfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqUserLoginFieldMessage const& aReqUserLoginFieldMessage)
{
    os <<std::endl;
    os <<"## ReqUserLoginFieldMessage ##" <<std::endl;
    os <<aReqUserLoginFieldMessage.requserloginfieldmessage_; 
    os <<"## end ReqUserLoginFieldMessage ##" <<std::endl;
}

class RspUserLoginFieldMessage : public FieldMessage
{
  public:
    RspUserLoginFieldMessage(const CThostFtdcRspUserLoginField* rspuserloginfieldmessage):
      type_(RSPUSERLOGINFIELDMESSAGE)
    {
      memset(&rspuserloginfieldmessage_, 0x0, sizeof(rspuserloginfieldmessage_));

      if( rspuserloginfieldmessage )
      {
        memcpy(&rspuserloginfieldmessage_, rspuserloginfieldmessage, sizeof(rspuserloginfieldmessage_));
      }
    }

    virtual ~RspUserLoginFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspUserLoginFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspUserLoginFieldMessage not support this function");
    }

    CThostFtdcRspUserLoginField rspuserloginfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspUserLoginFieldMessage const& aRspUserLoginFieldMessage)
{
    os <<std::endl;
    os <<"## RspUserLoginFieldMessage ##" <<std::endl;
    os <<aRspUserLoginFieldMessage.rspuserloginfieldmessage_; 
    os <<"## end RspUserLoginFieldMessage ##" <<std::endl;
}

class UserLogoutFieldMessage : public FieldMessage
{
  public:
    UserLogoutFieldMessage(const CThostFtdcUserLogoutField* userlogoutfieldmessage):
      type_(USERLOGOUTFIELDMESSAGE)
    {
      memset(&userlogoutfieldmessage_, 0x0, sizeof(userlogoutfieldmessage_));

      if( userlogoutfieldmessage )
      {
        memcpy(&userlogoutfieldmessage_, userlogoutfieldmessage, sizeof(userlogoutfieldmessage_));
      }
    }

    virtual ~UserLogoutFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserLogoutFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserLogoutFieldMessage not support this function");
    }

    CThostFtdcUserLogoutField userlogoutfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserLogoutFieldMessage const& aUserLogoutFieldMessage)
{
    os <<std::endl;
    os <<"## UserLogoutFieldMessage ##" <<std::endl;
    os <<aUserLogoutFieldMessage.userlogoutfieldmessage_; 
    os <<"## end UserLogoutFieldMessage ##" <<std::endl;
}

class ForceUserLogoutFieldMessage : public FieldMessage
{
  public:
    ForceUserLogoutFieldMessage(const CThostFtdcForceUserLogoutField* forceuserlogoutfieldmessage):
      type_(FORCEUSERLOGOUTFIELDMESSAGE)
    {
      memset(&forceuserlogoutfieldmessage_, 0x0, sizeof(forceuserlogoutfieldmessage_));

      if( forceuserlogoutfieldmessage )
      {
        memcpy(&forceuserlogoutfieldmessage_, forceuserlogoutfieldmessage, sizeof(forceuserlogoutfieldmessage_));
      }
    }

    virtual ~ForceUserLogoutFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ForceUserLogoutFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ForceUserLogoutFieldMessage not support this function");
    }

    CThostFtdcForceUserLogoutField forceuserlogoutfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ForceUserLogoutFieldMessage const& aForceUserLogoutFieldMessage)
{
    os <<std::endl;
    os <<"## ForceUserLogoutFieldMessage ##" <<std::endl;
    os <<aForceUserLogoutFieldMessage.forceuserlogoutfieldmessage_; 
    os <<"## end ForceUserLogoutFieldMessage ##" <<std::endl;
}

class ReqAuthenticateFieldMessage : public FieldMessage
{
  public:
    ReqAuthenticateFieldMessage(const CThostFtdcReqAuthenticateField* reqauthenticatefieldmessage):
      type_(REQAUTHENTICATEFIELDMESSAGE)
    {
      memset(&reqauthenticatefieldmessage_, 0x0, sizeof(reqauthenticatefieldmessage_));

      if( reqauthenticatefieldmessage )
      {
        memcpy(&reqauthenticatefieldmessage_, reqauthenticatefieldmessage, sizeof(reqauthenticatefieldmessage_));
      }
    }

    virtual ~ReqAuthenticateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqAuthenticateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqAuthenticateFieldMessage not support this function");
    }

    CThostFtdcReqAuthenticateField reqauthenticatefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqAuthenticateFieldMessage const& aReqAuthenticateFieldMessage)
{
    os <<std::endl;
    os <<"## ReqAuthenticateFieldMessage ##" <<std::endl;
    os <<aReqAuthenticateFieldMessage.reqauthenticatefieldmessage_; 
    os <<"## end ReqAuthenticateFieldMessage ##" <<std::endl;
}

class RspAuthenticateFieldMessage : public FieldMessage
{
  public:
    RspAuthenticateFieldMessage(const CThostFtdcRspAuthenticateField* rspauthenticatefieldmessage):
      type_(RSPAUTHENTICATEFIELDMESSAGE)
    {
      memset(&rspauthenticatefieldmessage_, 0x0, sizeof(rspauthenticatefieldmessage_));

      if( rspauthenticatefieldmessage )
      {
        memcpy(&rspauthenticatefieldmessage_, rspauthenticatefieldmessage, sizeof(rspauthenticatefieldmessage_));
      }
    }

    virtual ~RspAuthenticateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspAuthenticateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspAuthenticateFieldMessage not support this function");
    }

    CThostFtdcRspAuthenticateField rspauthenticatefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspAuthenticateFieldMessage const& aRspAuthenticateFieldMessage)
{
    os <<std::endl;
    os <<"## RspAuthenticateFieldMessage ##" <<std::endl;
    os <<aRspAuthenticateFieldMessage.rspauthenticatefieldmessage_; 
    os <<"## end RspAuthenticateFieldMessage ##" <<std::endl;
}

class AuthenticationInfoFieldMessage : public FieldMessage
{
  public:
    AuthenticationInfoFieldMessage(const CThostFtdcAuthenticationInfoField* authenticationinfofieldmessage):
      type_(AUTHENTICATIONINFOFIELDMESSAGE)
    {
      memset(&authenticationinfofieldmessage_, 0x0, sizeof(authenticationinfofieldmessage_));

      if( authenticationinfofieldmessage )
      {
        memcpy(&authenticationinfofieldmessage_, authenticationinfofieldmessage, sizeof(authenticationinfofieldmessage_));
      }
    }

    virtual ~AuthenticationInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type AuthenticationInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type AuthenticationInfoFieldMessage not support this function");
    }

    CThostFtdcAuthenticationInfoField authenticationinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, AuthenticationInfoFieldMessage const& aAuthenticationInfoFieldMessage)
{
    os <<std::endl;
    os <<"## AuthenticationInfoFieldMessage ##" <<std::endl;
    os <<aAuthenticationInfoFieldMessage.authenticationinfofieldmessage_; 
    os <<"## end AuthenticationInfoFieldMessage ##" <<std::endl;
}

class TransferHeaderFieldMessage : public FieldMessage
{
  public:
    TransferHeaderFieldMessage(const CThostFtdcTransferHeaderField* transferheaderfieldmessage):
      type_(TRANSFERHEADERFIELDMESSAGE)
    {
      memset(&transferheaderfieldmessage_, 0x0, sizeof(transferheaderfieldmessage_));

      if( transferheaderfieldmessage )
      {
        memcpy(&transferheaderfieldmessage_, transferheaderfieldmessage, sizeof(transferheaderfieldmessage_));
      }
    }

    virtual ~TransferHeaderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferHeaderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferHeaderFieldMessage not support this function");
    }

    CThostFtdcTransferHeaderField transferheaderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferHeaderFieldMessage const& aTransferHeaderFieldMessage)
{
    os <<std::endl;
    os <<"## TransferHeaderFieldMessage ##" <<std::endl;
    os <<aTransferHeaderFieldMessage.transferheaderfieldmessage_; 
    os <<"## end TransferHeaderFieldMessage ##" <<std::endl;
}

class TransferBankToFutureReqFieldMessage : public FieldMessage
{
  public:
    TransferBankToFutureReqFieldMessage(const CThostFtdcTransferBankToFutureReqField* transferbanktofuturereqfieldmessage):
      type_(TRANSFERBANKTOFUTUREREQFIELDMESSAGE)
    {
      memset(&transferbanktofuturereqfieldmessage_, 0x0, sizeof(transferbanktofuturereqfieldmessage_));

      if( transferbanktofuturereqfieldmessage )
      {
        memcpy(&transferbanktofuturereqfieldmessage_, transferbanktofuturereqfieldmessage, sizeof(transferbanktofuturereqfieldmessage_));
      }
    }

    virtual ~TransferBankToFutureReqFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferBankToFutureReqFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferBankToFutureReqFieldMessage not support this function");
    }

    CThostFtdcTransferBankToFutureReqField transferbanktofuturereqfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferBankToFutureReqFieldMessage const& aTransferBankToFutureReqFieldMessage)
{
    os <<std::endl;
    os <<"## TransferBankToFutureReqFieldMessage ##" <<std::endl;
    os <<aTransferBankToFutureReqFieldMessage.transferbanktofuturereqfieldmessage_; 
    os <<"## end TransferBankToFutureReqFieldMessage ##" <<std::endl;
}

class TransferBankToFutureRspFieldMessage : public FieldMessage
{
  public:
    TransferBankToFutureRspFieldMessage(const CThostFtdcTransferBankToFutureRspField* transferbanktofuturerspfieldmessage):
      type_(TRANSFERBANKTOFUTURERSPFIELDMESSAGE)
    {
      memset(&transferbanktofuturerspfieldmessage_, 0x0, sizeof(transferbanktofuturerspfieldmessage_));

      if( transferbanktofuturerspfieldmessage )
      {
        memcpy(&transferbanktofuturerspfieldmessage_, transferbanktofuturerspfieldmessage, sizeof(transferbanktofuturerspfieldmessage_));
      }
    }

    virtual ~TransferBankToFutureRspFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferBankToFutureRspFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferBankToFutureRspFieldMessage not support this function");
    }

    CThostFtdcTransferBankToFutureRspField transferbanktofuturerspfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferBankToFutureRspFieldMessage const& aTransferBankToFutureRspFieldMessage)
{
    os <<std::endl;
    os <<"## TransferBankToFutureRspFieldMessage ##" <<std::endl;
    os <<aTransferBankToFutureRspFieldMessage.transferbanktofuturerspfieldmessage_; 
    os <<"## end TransferBankToFutureRspFieldMessage ##" <<std::endl;
}

class TransferFutureToBankReqFieldMessage : public FieldMessage
{
  public:
    TransferFutureToBankReqFieldMessage(const CThostFtdcTransferFutureToBankReqField* transferfuturetobankreqfieldmessage):
      type_(TRANSFERFUTURETOBANKREQFIELDMESSAGE)
    {
      memset(&transferfuturetobankreqfieldmessage_, 0x0, sizeof(transferfuturetobankreqfieldmessage_));

      if( transferfuturetobankreqfieldmessage )
      {
        memcpy(&transferfuturetobankreqfieldmessage_, transferfuturetobankreqfieldmessage, sizeof(transferfuturetobankreqfieldmessage_));
      }
    }

    virtual ~TransferFutureToBankReqFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferFutureToBankReqFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferFutureToBankReqFieldMessage not support this function");
    }

    CThostFtdcTransferFutureToBankReqField transferfuturetobankreqfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferFutureToBankReqFieldMessage const& aTransferFutureToBankReqFieldMessage)
{
    os <<std::endl;
    os <<"## TransferFutureToBankReqFieldMessage ##" <<std::endl;
    os <<aTransferFutureToBankReqFieldMessage.transferfuturetobankreqfieldmessage_; 
    os <<"## end TransferFutureToBankReqFieldMessage ##" <<std::endl;
}

class TransferFutureToBankRspFieldMessage : public FieldMessage
{
  public:
    TransferFutureToBankRspFieldMessage(const CThostFtdcTransferFutureToBankRspField* transferfuturetobankrspfieldmessage):
      type_(TRANSFERFUTURETOBANKRSPFIELDMESSAGE)
    {
      memset(&transferfuturetobankrspfieldmessage_, 0x0, sizeof(transferfuturetobankrspfieldmessage_));

      if( transferfuturetobankrspfieldmessage )
      {
        memcpy(&transferfuturetobankrspfieldmessage_, transferfuturetobankrspfieldmessage, sizeof(transferfuturetobankrspfieldmessage_));
      }
    }

    virtual ~TransferFutureToBankRspFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferFutureToBankRspFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferFutureToBankRspFieldMessage not support this function");
    }

    CThostFtdcTransferFutureToBankRspField transferfuturetobankrspfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferFutureToBankRspFieldMessage const& aTransferFutureToBankRspFieldMessage)
{
    os <<std::endl;
    os <<"## TransferFutureToBankRspFieldMessage ##" <<std::endl;
    os <<aTransferFutureToBankRspFieldMessage.transferfuturetobankrspfieldmessage_; 
    os <<"## end TransferFutureToBankRspFieldMessage ##" <<std::endl;
}

class TransferQryBankReqFieldMessage : public FieldMessage
{
  public:
    TransferQryBankReqFieldMessage(const CThostFtdcTransferQryBankReqField* transferqrybankreqfieldmessage):
      type_(TRANSFERQRYBANKREQFIELDMESSAGE)
    {
      memset(&transferqrybankreqfieldmessage_, 0x0, sizeof(transferqrybankreqfieldmessage_));

      if( transferqrybankreqfieldmessage )
      {
        memcpy(&transferqrybankreqfieldmessage_, transferqrybankreqfieldmessage, sizeof(transferqrybankreqfieldmessage_));
      }
    }

    virtual ~TransferQryBankReqFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferQryBankReqFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferQryBankReqFieldMessage not support this function");
    }

    CThostFtdcTransferQryBankReqField transferqrybankreqfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferQryBankReqFieldMessage const& aTransferQryBankReqFieldMessage)
{
    os <<std::endl;
    os <<"## TransferQryBankReqFieldMessage ##" <<std::endl;
    os <<aTransferQryBankReqFieldMessage.transferqrybankreqfieldmessage_; 
    os <<"## end TransferQryBankReqFieldMessage ##" <<std::endl;
}

class TransferQryBankRspFieldMessage : public FieldMessage
{
  public:
    TransferQryBankRspFieldMessage(const CThostFtdcTransferQryBankRspField* transferqrybankrspfieldmessage):
      type_(TRANSFERQRYBANKRSPFIELDMESSAGE)
    {
      memset(&transferqrybankrspfieldmessage_, 0x0, sizeof(transferqrybankrspfieldmessage_));

      if( transferqrybankrspfieldmessage )
      {
        memcpy(&transferqrybankrspfieldmessage_, transferqrybankrspfieldmessage, sizeof(transferqrybankrspfieldmessage_));
      }
    }

    virtual ~TransferQryBankRspFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferQryBankRspFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferQryBankRspFieldMessage not support this function");
    }

    CThostFtdcTransferQryBankRspField transferqrybankrspfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferQryBankRspFieldMessage const& aTransferQryBankRspFieldMessage)
{
    os <<std::endl;
    os <<"## TransferQryBankRspFieldMessage ##" <<std::endl;
    os <<aTransferQryBankRspFieldMessage.transferqrybankrspfieldmessage_; 
    os <<"## end TransferQryBankRspFieldMessage ##" <<std::endl;
}

class TransferQryDetailReqFieldMessage : public FieldMessage
{
  public:
    TransferQryDetailReqFieldMessage(const CThostFtdcTransferQryDetailReqField* transferqrydetailreqfieldmessage):
      type_(TRANSFERQRYDETAILREQFIELDMESSAGE)
    {
      memset(&transferqrydetailreqfieldmessage_, 0x0, sizeof(transferqrydetailreqfieldmessage_));

      if( transferqrydetailreqfieldmessage )
      {
        memcpy(&transferqrydetailreqfieldmessage_, transferqrydetailreqfieldmessage, sizeof(transferqrydetailreqfieldmessage_));
      }
    }

    virtual ~TransferQryDetailReqFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferQryDetailReqFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferQryDetailReqFieldMessage not support this function");
    }

    CThostFtdcTransferQryDetailReqField transferqrydetailreqfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferQryDetailReqFieldMessage const& aTransferQryDetailReqFieldMessage)
{
    os <<std::endl;
    os <<"## TransferQryDetailReqFieldMessage ##" <<std::endl;
    os <<aTransferQryDetailReqFieldMessage.transferqrydetailreqfieldmessage_; 
    os <<"## end TransferQryDetailReqFieldMessage ##" <<std::endl;
}

class TransferQryDetailRspFieldMessage : public FieldMessage
{
  public:
    TransferQryDetailRspFieldMessage(const CThostFtdcTransferQryDetailRspField* transferqrydetailrspfieldmessage):
      type_(TRANSFERQRYDETAILRSPFIELDMESSAGE)
    {
      memset(&transferqrydetailrspfieldmessage_, 0x0, sizeof(transferqrydetailrspfieldmessage_));

      if( transferqrydetailrspfieldmessage )
      {
        memcpy(&transferqrydetailrspfieldmessage_, transferqrydetailrspfieldmessage, sizeof(transferqrydetailrspfieldmessage_));
      }
    }

    virtual ~TransferQryDetailRspFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferQryDetailRspFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferQryDetailRspFieldMessage not support this function");
    }

    CThostFtdcTransferQryDetailRspField transferqrydetailrspfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferQryDetailRspFieldMessage const& aTransferQryDetailRspFieldMessage)
{
    os <<std::endl;
    os <<"## TransferQryDetailRspFieldMessage ##" <<std::endl;
    os <<aTransferQryDetailRspFieldMessage.transferqrydetailrspfieldmessage_; 
    os <<"## end TransferQryDetailRspFieldMessage ##" <<std::endl;
}

class RspInfoFieldMessage : public FieldMessage
{
  public:
    RspInfoFieldMessage(const CThostFtdcRspInfoField* rspinfofieldmessage):
      type_(RSPINFOFIELDMESSAGE)
    {
      memset(&rspinfofieldmessage_, 0x0, sizeof(rspinfofieldmessage_));

      if( rspinfofieldmessage )
      {
        memcpy(&rspinfofieldmessage_, rspinfofieldmessage, sizeof(rspinfofieldmessage_));
      }
    }

    virtual ~RspInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspInfoFieldMessage not support this function");
    }

    CThostFtdcRspInfoField rspinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspInfoFieldMessage const& aRspInfoFieldMessage)
{
    os <<std::endl;
    os <<"## RspInfoFieldMessage ##" <<std::endl;
    os <<aRspInfoFieldMessage.rspinfofieldmessage_; 
    os <<"## end RspInfoFieldMessage ##" <<std::endl;
}

class ExchangeFieldMessage : public FieldMessage
{
  public:
    ExchangeFieldMessage(const CThostFtdcExchangeField* exchangefieldmessage):
      type_(EXCHANGEFIELDMESSAGE)
    {
      memset(&exchangefieldmessage_, 0x0, sizeof(exchangefieldmessage_));

      if( exchangefieldmessage )
      {
        memcpy(&exchangefieldmessage_, exchangefieldmessage, sizeof(exchangefieldmessage_));
      }
    }

    virtual ~ExchangeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeFieldMessage not support this function");
    }

    CThostFtdcExchangeField exchangefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeFieldMessage const& aExchangeFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeFieldMessage ##" <<std::endl;
    os <<aExchangeFieldMessage.exchangefieldmessage_; 
    os <<"## end ExchangeFieldMessage ##" <<std::endl;
}

class ProductFieldMessage : public FieldMessage
{
  public:
    ProductFieldMessage(const CThostFtdcProductField* productfieldmessage):
      type_(PRODUCTFIELDMESSAGE)
    {
      memset(&productfieldmessage_, 0x0, sizeof(productfieldmessage_));

      if( productfieldmessage )
      {
        memcpy(&productfieldmessage_, productfieldmessage, sizeof(productfieldmessage_));
      }
    }

    virtual ~ProductFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ProductFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ProductFieldMessage not support this function");
    }

    CThostFtdcProductField productfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ProductFieldMessage const& aProductFieldMessage)
{
    os <<std::endl;
    os <<"## ProductFieldMessage ##" <<std::endl;
    os <<aProductFieldMessage.productfieldmessage_; 
    os <<"## end ProductFieldMessage ##" <<std::endl;
}

class InstrumentFieldMessage : public FieldMessage
{
  public:
    InstrumentFieldMessage(const CThostFtdcInstrumentField* instrumentfieldmessage):
      type_(INSTRUMENTFIELDMESSAGE)
    {
      memset(&instrumentfieldmessage_, 0x0, sizeof(instrumentfieldmessage_));

      if( instrumentfieldmessage )
      {
        memcpy(&instrumentfieldmessage_, instrumentfieldmessage, sizeof(instrumentfieldmessage_));
      }
    }

    virtual ~InstrumentFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentFieldMessage not support this function");
    }

    CThostFtdcInstrumentField instrumentfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentFieldMessage const& aInstrumentFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentFieldMessage ##" <<std::endl;
    os <<aInstrumentFieldMessage.instrumentfieldmessage_; 
    os <<"## end InstrumentFieldMessage ##" <<std::endl;
}

class BrokerFieldMessage : public FieldMessage
{
  public:
    BrokerFieldMessage(const CThostFtdcBrokerField* brokerfieldmessage):
      type_(BROKERFIELDMESSAGE)
    {
      memset(&brokerfieldmessage_, 0x0, sizeof(brokerfieldmessage_));

      if( brokerfieldmessage )
      {
        memcpy(&brokerfieldmessage_, brokerfieldmessage, sizeof(brokerfieldmessage_));
      }
    }

    virtual ~BrokerFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerFieldMessage not support this function");
    }

    CThostFtdcBrokerField brokerfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerFieldMessage const& aBrokerFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerFieldMessage ##" <<std::endl;
    os <<aBrokerFieldMessage.brokerfieldmessage_; 
    os <<"## end BrokerFieldMessage ##" <<std::endl;
}

class TraderFieldMessage : public FieldMessage
{
  public:
    TraderFieldMessage(const CThostFtdcTraderField* traderfieldmessage):
      type_(TRADERFIELDMESSAGE)
    {
      memset(&traderfieldmessage_, 0x0, sizeof(traderfieldmessage_));

      if( traderfieldmessage )
      {
        memcpy(&traderfieldmessage_, traderfieldmessage, sizeof(traderfieldmessage_));
      }
    }

    virtual ~TraderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TraderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TraderFieldMessage not support this function");
    }

    CThostFtdcTraderField traderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TraderFieldMessage const& aTraderFieldMessage)
{
    os <<std::endl;
    os <<"## TraderFieldMessage ##" <<std::endl;
    os <<aTraderFieldMessage.traderfieldmessage_; 
    os <<"## end TraderFieldMessage ##" <<std::endl;
}

class InvestorFieldMessage : public FieldMessage
{
  public:
    InvestorFieldMessage(const CThostFtdcInvestorField* investorfieldmessage):
      type_(INVESTORFIELDMESSAGE)
    {
      memset(&investorfieldmessage_, 0x0, sizeof(investorfieldmessage_));

      if( investorfieldmessage )
      {
        memcpy(&investorfieldmessage_, investorfieldmessage, sizeof(investorfieldmessage_));
      }
    }

    virtual ~InvestorFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorFieldMessage not support this function");
    }

    CThostFtdcInvestorField investorfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorFieldMessage const& aInvestorFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorFieldMessage ##" <<std::endl;
    os <<aInvestorFieldMessage.investorfieldmessage_; 
    os <<"## end InvestorFieldMessage ##" <<std::endl;
}

class TradingCodeFieldMessage : public FieldMessage
{
  public:
    TradingCodeFieldMessage(const CThostFtdcTradingCodeField* tradingcodefieldmessage):
      type_(TRADINGCODEFIELDMESSAGE)
    {
      memset(&tradingcodefieldmessage_, 0x0, sizeof(tradingcodefieldmessage_));

      if( tradingcodefieldmessage )
      {
        memcpy(&tradingcodefieldmessage_, tradingcodefieldmessage, sizeof(tradingcodefieldmessage_));
      }
    }

    virtual ~TradingCodeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingCodeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingCodeFieldMessage not support this function");
    }

    CThostFtdcTradingCodeField tradingcodefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingCodeFieldMessage const& aTradingCodeFieldMessage)
{
    os <<std::endl;
    os <<"## TradingCodeFieldMessage ##" <<std::endl;
    os <<aTradingCodeFieldMessage.tradingcodefieldmessage_; 
    os <<"## end TradingCodeFieldMessage ##" <<std::endl;
}

class PartBrokerFieldMessage : public FieldMessage
{
  public:
    PartBrokerFieldMessage(const CThostFtdcPartBrokerField* partbrokerfieldmessage):
      type_(PARTBROKERFIELDMESSAGE)
    {
      memset(&partbrokerfieldmessage_, 0x0, sizeof(partbrokerfieldmessage_));

      if( partbrokerfieldmessage )
      {
        memcpy(&partbrokerfieldmessage_, partbrokerfieldmessage, sizeof(partbrokerfieldmessage_));
      }
    }

    virtual ~PartBrokerFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type PartBrokerFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type PartBrokerFieldMessage not support this function");
    }

    CThostFtdcPartBrokerField partbrokerfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, PartBrokerFieldMessage const& aPartBrokerFieldMessage)
{
    os <<std::endl;
    os <<"## PartBrokerFieldMessage ##" <<std::endl;
    os <<aPartBrokerFieldMessage.partbrokerfieldmessage_; 
    os <<"## end PartBrokerFieldMessage ##" <<std::endl;
}

class SuperUserFieldMessage : public FieldMessage
{
  public:
    SuperUserFieldMessage(const CThostFtdcSuperUserField* superuserfieldmessage):
      type_(SUPERUSERFIELDMESSAGE)
    {
      memset(&superuserfieldmessage_, 0x0, sizeof(superuserfieldmessage_));

      if( superuserfieldmessage )
      {
        memcpy(&superuserfieldmessage_, superuserfieldmessage, sizeof(superuserfieldmessage_));
      }
    }

    virtual ~SuperUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SuperUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SuperUserFieldMessage not support this function");
    }

    CThostFtdcSuperUserField superuserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SuperUserFieldMessage const& aSuperUserFieldMessage)
{
    os <<std::endl;
    os <<"## SuperUserFieldMessage ##" <<std::endl;
    os <<aSuperUserFieldMessage.superuserfieldmessage_; 
    os <<"## end SuperUserFieldMessage ##" <<std::endl;
}

class SuperUserFunctionFieldMessage : public FieldMessage
{
  public:
    SuperUserFunctionFieldMessage(const CThostFtdcSuperUserFunctionField* superuserfunctionfieldmessage):
      type_(SUPERUSERFUNCTIONFIELDMESSAGE)
    {
      memset(&superuserfunctionfieldmessage_, 0x0, sizeof(superuserfunctionfieldmessage_));

      if( superuserfunctionfieldmessage )
      {
        memcpy(&superuserfunctionfieldmessage_, superuserfunctionfieldmessage, sizeof(superuserfunctionfieldmessage_));
      }
    }

    virtual ~SuperUserFunctionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SuperUserFunctionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SuperUserFunctionFieldMessage not support this function");
    }

    CThostFtdcSuperUserFunctionField superuserfunctionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SuperUserFunctionFieldMessage const& aSuperUserFunctionFieldMessage)
{
    os <<std::endl;
    os <<"## SuperUserFunctionFieldMessage ##" <<std::endl;
    os <<aSuperUserFunctionFieldMessage.superuserfunctionfieldmessage_; 
    os <<"## end SuperUserFunctionFieldMessage ##" <<std::endl;
}

class InvestorGroupFieldMessage : public FieldMessage
{
  public:
    InvestorGroupFieldMessage(const CThostFtdcInvestorGroupField* investorgroupfieldmessage):
      type_(INVESTORGROUPFIELDMESSAGE)
    {
      memset(&investorgroupfieldmessage_, 0x0, sizeof(investorgroupfieldmessage_));

      if( investorgroupfieldmessage )
      {
        memcpy(&investorgroupfieldmessage_, investorgroupfieldmessage, sizeof(investorgroupfieldmessage_));
      }
    }

    virtual ~InvestorGroupFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorGroupFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorGroupFieldMessage not support this function");
    }

    CThostFtdcInvestorGroupField investorgroupfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorGroupFieldMessage const& aInvestorGroupFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorGroupFieldMessage ##" <<std::endl;
    os <<aInvestorGroupFieldMessage.investorgroupfieldmessage_; 
    os <<"## end InvestorGroupFieldMessage ##" <<std::endl;
}

class TradingAccountFieldMessage : public FieldMessage
{
  public:
    TradingAccountFieldMessage(const CThostFtdcTradingAccountField* tradingaccountfieldmessage):
      type_(TRADINGACCOUNTFIELDMESSAGE)
    {
      memset(&tradingaccountfieldmessage_, 0x0, sizeof(tradingaccountfieldmessage_));

      if( tradingaccountfieldmessage )
      {
        memcpy(&tradingaccountfieldmessage_, tradingaccountfieldmessage, sizeof(tradingaccountfieldmessage_));
      }
    }

    virtual ~TradingAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingAccountFieldMessage not support this function");
    }

    CThostFtdcTradingAccountField tradingaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingAccountFieldMessage const& aTradingAccountFieldMessage)
{
    os <<std::endl;
    os <<"## TradingAccountFieldMessage ##" <<std::endl;
    os <<aTradingAccountFieldMessage.tradingaccountfieldmessage_; 
    os <<"## end TradingAccountFieldMessage ##" <<std::endl;
}

class InvestorPositionFieldMessage : public FieldMessage
{
  public:
    InvestorPositionFieldMessage(const CThostFtdcInvestorPositionField* investorpositionfieldmessage):
      type_(INVESTORPOSITIONFIELDMESSAGE)
    {
      memset(&investorpositionfieldmessage_, 0x0, sizeof(investorpositionfieldmessage_));

      if( investorpositionfieldmessage )
      {
        memcpy(&investorpositionfieldmessage_, investorpositionfieldmessage, sizeof(investorpositionfieldmessage_));
      }
    }

    virtual ~InvestorPositionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorPositionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorPositionFieldMessage not support this function");
    }

    CThostFtdcInvestorPositionField investorpositionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorPositionFieldMessage const& aInvestorPositionFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorPositionFieldMessage ##" <<std::endl;
    os <<aInvestorPositionFieldMessage.investorpositionfieldmessage_; 
    os <<"## end InvestorPositionFieldMessage ##" <<std::endl;
}

class InstrumentMarginRateFieldMessage : public FieldMessage
{
  public:
    InstrumentMarginRateFieldMessage(const CThostFtdcInstrumentMarginRateField* instrumentmarginratefieldmessage):
      type_(INSTRUMENTMARGINRATEFIELDMESSAGE)
    {
      memset(&instrumentmarginratefieldmessage_, 0x0, sizeof(instrumentmarginratefieldmessage_));

      if( instrumentmarginratefieldmessage )
      {
        memcpy(&instrumentmarginratefieldmessage_, instrumentmarginratefieldmessage, sizeof(instrumentmarginratefieldmessage_));
      }
    }

    virtual ~InstrumentMarginRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentMarginRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentMarginRateFieldMessage not support this function");
    }

    CThostFtdcInstrumentMarginRateField instrumentmarginratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentMarginRateFieldMessage const& aInstrumentMarginRateFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentMarginRateFieldMessage ##" <<std::endl;
    os <<aInstrumentMarginRateFieldMessage.instrumentmarginratefieldmessage_; 
    os <<"## end InstrumentMarginRateFieldMessage ##" <<std::endl;
}

class InstrumentCommissionRateFieldMessage : public FieldMessage
{
  public:
    InstrumentCommissionRateFieldMessage(const CThostFtdcInstrumentCommissionRateField* instrumentcommissionratefieldmessage):
      type_(INSTRUMENTCOMMISSIONRATEFIELDMESSAGE)
    {
      memset(&instrumentcommissionratefieldmessage_, 0x0, sizeof(instrumentcommissionratefieldmessage_));

      if( instrumentcommissionratefieldmessage )
      {
        memcpy(&instrumentcommissionratefieldmessage_, instrumentcommissionratefieldmessage, sizeof(instrumentcommissionratefieldmessage_));
      }
    }

    virtual ~InstrumentCommissionRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentCommissionRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentCommissionRateFieldMessage not support this function");
    }

    CThostFtdcInstrumentCommissionRateField instrumentcommissionratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentCommissionRateFieldMessage const& aInstrumentCommissionRateFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentCommissionRateFieldMessage ##" <<std::endl;
    os <<aInstrumentCommissionRateFieldMessage.instrumentcommissionratefieldmessage_; 
    os <<"## end InstrumentCommissionRateFieldMessage ##" <<std::endl;
}

class DepthMarketDataFieldMessage : public FieldMessage
{
  public:
    DepthMarketDataFieldMessage(const CThostFtdcDepthMarketDataField* depthmarketdatafieldmessage):
      type_(DEPTHMARKETDATAFIELDMESSAGE)
    {
      memset(&depthmarketdatafieldmessage_, 0x0, sizeof(depthmarketdatafieldmessage_));

      if( depthmarketdatafieldmessage )
      {
        memcpy(&depthmarketdatafieldmessage_, depthmarketdatafieldmessage, sizeof(depthmarketdatafieldmessage_));
      }
    }

    virtual ~DepthMarketDataFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type DepthMarketDataFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type DepthMarketDataFieldMessage not support this function");
    }

    CThostFtdcDepthMarketDataField depthmarketdatafieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DepthMarketDataFieldMessage const& aDepthMarketDataFieldMessage)
{
    os <<std::endl;
    os <<"## DepthMarketDataFieldMessage ##" <<std::endl;
    os <<aDepthMarketDataFieldMessage.depthmarketdatafieldmessage_; 
    os <<"## end DepthMarketDataFieldMessage ##" <<std::endl;
}

class InstrumentTradingRightFieldMessage : public FieldMessage
{
  public:
    InstrumentTradingRightFieldMessage(const CThostFtdcInstrumentTradingRightField* instrumenttradingrightfieldmessage):
      type_(INSTRUMENTTRADINGRIGHTFIELDMESSAGE)
    {
      memset(&instrumenttradingrightfieldmessage_, 0x0, sizeof(instrumenttradingrightfieldmessage_));

      if( instrumenttradingrightfieldmessage )
      {
        memcpy(&instrumenttradingrightfieldmessage_, instrumenttradingrightfieldmessage, sizeof(instrumenttradingrightfieldmessage_));
      }
    }

    virtual ~InstrumentTradingRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentTradingRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentTradingRightFieldMessage not support this function");
    }

    CThostFtdcInstrumentTradingRightField instrumenttradingrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentTradingRightFieldMessage const& aInstrumentTradingRightFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentTradingRightFieldMessage ##" <<std::endl;
    os <<aInstrumentTradingRightFieldMessage.instrumenttradingrightfieldmessage_; 
    os <<"## end InstrumentTradingRightFieldMessage ##" <<std::endl;
}

class BrokerUserFieldMessage : public FieldMessage
{
  public:
    BrokerUserFieldMessage(const CThostFtdcBrokerUserField* brokeruserfieldmessage):
      type_(BROKERUSERFIELDMESSAGE)
    {
      memset(&brokeruserfieldmessage_, 0x0, sizeof(brokeruserfieldmessage_));

      if( brokeruserfieldmessage )
      {
        memcpy(&brokeruserfieldmessage_, brokeruserfieldmessage, sizeof(brokeruserfieldmessage_));
      }
    }

    virtual ~BrokerUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserFieldMessage not support this function");
    }

    CThostFtdcBrokerUserField brokeruserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserFieldMessage const& aBrokerUserFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserFieldMessage ##" <<std::endl;
    os <<aBrokerUserFieldMessage.brokeruserfieldmessage_; 
    os <<"## end BrokerUserFieldMessage ##" <<std::endl;
}

class BrokerUserPasswordFieldMessage : public FieldMessage
{
  public:
    BrokerUserPasswordFieldMessage(const CThostFtdcBrokerUserPasswordField* brokeruserpasswordfieldmessage):
      type_(BROKERUSERPASSWORDFIELDMESSAGE)
    {
      memset(&brokeruserpasswordfieldmessage_, 0x0, sizeof(brokeruserpasswordfieldmessage_));

      if( brokeruserpasswordfieldmessage )
      {
        memcpy(&brokeruserpasswordfieldmessage_, brokeruserpasswordfieldmessage, sizeof(brokeruserpasswordfieldmessage_));
      }
    }

    virtual ~BrokerUserPasswordFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserPasswordFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserPasswordFieldMessage not support this function");
    }

    CThostFtdcBrokerUserPasswordField brokeruserpasswordfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserPasswordFieldMessage const& aBrokerUserPasswordFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserPasswordFieldMessage ##" <<std::endl;
    os <<aBrokerUserPasswordFieldMessage.brokeruserpasswordfieldmessage_; 
    os <<"## end BrokerUserPasswordFieldMessage ##" <<std::endl;
}

class BrokerUserFunctionFieldMessage : public FieldMessage
{
  public:
    BrokerUserFunctionFieldMessage(const CThostFtdcBrokerUserFunctionField* brokeruserfunctionfieldmessage):
      type_(BROKERUSERFUNCTIONFIELDMESSAGE)
    {
      memset(&brokeruserfunctionfieldmessage_, 0x0, sizeof(brokeruserfunctionfieldmessage_));

      if( brokeruserfunctionfieldmessage )
      {
        memcpy(&brokeruserfunctionfieldmessage_, brokeruserfunctionfieldmessage, sizeof(brokeruserfunctionfieldmessage_));
      }
    }

    virtual ~BrokerUserFunctionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserFunctionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserFunctionFieldMessage not support this function");
    }

    CThostFtdcBrokerUserFunctionField brokeruserfunctionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserFunctionFieldMessage const& aBrokerUserFunctionFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserFunctionFieldMessage ##" <<std::endl;
    os <<aBrokerUserFunctionFieldMessage.brokeruserfunctionfieldmessage_; 
    os <<"## end BrokerUserFunctionFieldMessage ##" <<std::endl;
}

class TraderOfferFieldMessage : public FieldMessage
{
  public:
    TraderOfferFieldMessage(const CThostFtdcTraderOfferField* traderofferfieldmessage):
      type_(TRADEROFFERFIELDMESSAGE)
    {
      memset(&traderofferfieldmessage_, 0x0, sizeof(traderofferfieldmessage_));

      if( traderofferfieldmessage )
      {
        memcpy(&traderofferfieldmessage_, traderofferfieldmessage, sizeof(traderofferfieldmessage_));
      }
    }

    virtual ~TraderOfferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TraderOfferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TraderOfferFieldMessage not support this function");
    }

    CThostFtdcTraderOfferField traderofferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TraderOfferFieldMessage const& aTraderOfferFieldMessage)
{
    os <<std::endl;
    os <<"## TraderOfferFieldMessage ##" <<std::endl;
    os <<aTraderOfferFieldMessage.traderofferfieldmessage_; 
    os <<"## end TraderOfferFieldMessage ##" <<std::endl;
}

class SettlementInfoFieldMessage : public FieldMessage
{
  public:
    SettlementInfoFieldMessage(const CThostFtdcSettlementInfoField* settlementinfofieldmessage):
      type_(SETTLEMENTINFOFIELDMESSAGE)
    {
      memset(&settlementinfofieldmessage_, 0x0, sizeof(settlementinfofieldmessage_));

      if( settlementinfofieldmessage )
      {
        memcpy(&settlementinfofieldmessage_, settlementinfofieldmessage, sizeof(settlementinfofieldmessage_));
      }
    }

    virtual ~SettlementInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SettlementInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SettlementInfoFieldMessage not support this function");
    }

    CThostFtdcSettlementInfoField settlementinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SettlementInfoFieldMessage const& aSettlementInfoFieldMessage)
{
    os <<std::endl;
    os <<"## SettlementInfoFieldMessage ##" <<std::endl;
    os <<aSettlementInfoFieldMessage.settlementinfofieldmessage_; 
    os <<"## end SettlementInfoFieldMessage ##" <<std::endl;
}

class InstrumentMarginRateAdjustFieldMessage : public FieldMessage
{
  public:
    InstrumentMarginRateAdjustFieldMessage(const CThostFtdcInstrumentMarginRateAdjustField* instrumentmarginrateadjustfieldmessage):
      type_(INSTRUMENTMARGINRATEADJUSTFIELDMESSAGE)
    {
      memset(&instrumentmarginrateadjustfieldmessage_, 0x0, sizeof(instrumentmarginrateadjustfieldmessage_));

      if( instrumentmarginrateadjustfieldmessage )
      {
        memcpy(&instrumentmarginrateadjustfieldmessage_, instrumentmarginrateadjustfieldmessage, sizeof(instrumentmarginrateadjustfieldmessage_));
      }
    }

    virtual ~InstrumentMarginRateAdjustFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentMarginRateAdjustFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentMarginRateAdjustFieldMessage not support this function");
    }

    CThostFtdcInstrumentMarginRateAdjustField instrumentmarginrateadjustfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentMarginRateAdjustFieldMessage const& aInstrumentMarginRateAdjustFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentMarginRateAdjustFieldMessage ##" <<std::endl;
    os <<aInstrumentMarginRateAdjustFieldMessage.instrumentmarginrateadjustfieldmessage_; 
    os <<"## end InstrumentMarginRateAdjustFieldMessage ##" <<std::endl;
}

class ExchangeMarginRateFieldMessage : public FieldMessage
{
  public:
    ExchangeMarginRateFieldMessage(const CThostFtdcExchangeMarginRateField* exchangemarginratefieldmessage):
      type_(EXCHANGEMARGINRATEFIELDMESSAGE)
    {
      memset(&exchangemarginratefieldmessage_, 0x0, sizeof(exchangemarginratefieldmessage_));

      if( exchangemarginratefieldmessage )
      {
        memcpy(&exchangemarginratefieldmessage_, exchangemarginratefieldmessage, sizeof(exchangemarginratefieldmessage_));
      }
    }

    virtual ~ExchangeMarginRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeMarginRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeMarginRateFieldMessage not support this function");
    }

    CThostFtdcExchangeMarginRateField exchangemarginratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeMarginRateFieldMessage const& aExchangeMarginRateFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeMarginRateFieldMessage ##" <<std::endl;
    os <<aExchangeMarginRateFieldMessage.exchangemarginratefieldmessage_; 
    os <<"## end ExchangeMarginRateFieldMessage ##" <<std::endl;
}

class ExchangeMarginRateAdjustFieldMessage : public FieldMessage
{
  public:
    ExchangeMarginRateAdjustFieldMessage(const CThostFtdcExchangeMarginRateAdjustField* exchangemarginrateadjustfieldmessage):
      type_(EXCHANGEMARGINRATEADJUSTFIELDMESSAGE)
    {
      memset(&exchangemarginrateadjustfieldmessage_, 0x0, sizeof(exchangemarginrateadjustfieldmessage_));

      if( exchangemarginrateadjustfieldmessage )
      {
        memcpy(&exchangemarginrateadjustfieldmessage_, exchangemarginrateadjustfieldmessage, sizeof(exchangemarginrateadjustfieldmessage_));
      }
    }

    virtual ~ExchangeMarginRateAdjustFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeMarginRateAdjustFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeMarginRateAdjustFieldMessage not support this function");
    }

    CThostFtdcExchangeMarginRateAdjustField exchangemarginrateadjustfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeMarginRateAdjustFieldMessage const& aExchangeMarginRateAdjustFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeMarginRateAdjustFieldMessage ##" <<std::endl;
    os <<aExchangeMarginRateAdjustFieldMessage.exchangemarginrateadjustfieldmessage_; 
    os <<"## end ExchangeMarginRateAdjustFieldMessage ##" <<std::endl;
}

class ExchangeRateFieldMessage : public FieldMessage
{
  public:
    ExchangeRateFieldMessage(const CThostFtdcExchangeRateField* exchangeratefieldmessage):
      type_(EXCHANGERATEFIELDMESSAGE)
    {
      memset(&exchangeratefieldmessage_, 0x0, sizeof(exchangeratefieldmessage_));

      if( exchangeratefieldmessage )
      {
        memcpy(&exchangeratefieldmessage_, exchangeratefieldmessage, sizeof(exchangeratefieldmessage_));
      }
    }

    virtual ~ExchangeRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeRateFieldMessage not support this function");
    }

    CThostFtdcExchangeRateField exchangeratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeRateFieldMessage const& aExchangeRateFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeRateFieldMessage ##" <<std::endl;
    os <<aExchangeRateFieldMessage.exchangeratefieldmessage_; 
    os <<"## end ExchangeRateFieldMessage ##" <<std::endl;
}

class SettlementRefFieldMessage : public FieldMessage
{
  public:
    SettlementRefFieldMessage(const CThostFtdcSettlementRefField* settlementreffieldmessage):
      type_(SETTLEMENTREFFIELDMESSAGE)
    {
      memset(&settlementreffieldmessage_, 0x0, sizeof(settlementreffieldmessage_));

      if( settlementreffieldmessage )
      {
        memcpy(&settlementreffieldmessage_, settlementreffieldmessage, sizeof(settlementreffieldmessage_));
      }
    }

    virtual ~SettlementRefFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SettlementRefFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SettlementRefFieldMessage not support this function");
    }

    CThostFtdcSettlementRefField settlementreffieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SettlementRefFieldMessage const& aSettlementRefFieldMessage)
{
    os <<std::endl;
    os <<"## SettlementRefFieldMessage ##" <<std::endl;
    os <<aSettlementRefFieldMessage.settlementreffieldmessage_; 
    os <<"## end SettlementRefFieldMessage ##" <<std::endl;
}

class CurrentTimeFieldMessage : public FieldMessage
{
  public:
    CurrentTimeFieldMessage(const CThostFtdcCurrentTimeField* currenttimefieldmessage):
      type_(CURRENTTIMEFIELDMESSAGE)
    {
      memset(&currenttimefieldmessage_, 0x0, sizeof(currenttimefieldmessage_));

      if( currenttimefieldmessage )
      {
        memcpy(&currenttimefieldmessage_, currenttimefieldmessage, sizeof(currenttimefieldmessage_));
      }
    }

    virtual ~CurrentTimeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CurrentTimeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CurrentTimeFieldMessage not support this function");
    }

    CThostFtdcCurrentTimeField currenttimefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CurrentTimeFieldMessage const& aCurrentTimeFieldMessage)
{
    os <<std::endl;
    os <<"## CurrentTimeFieldMessage ##" <<std::endl;
    os <<aCurrentTimeFieldMessage.currenttimefieldmessage_; 
    os <<"## end CurrentTimeFieldMessage ##" <<std::endl;
}

class CommPhaseFieldMessage : public FieldMessage
{
  public:
    CommPhaseFieldMessage(const CThostFtdcCommPhaseField* commphasefieldmessage):
      type_(COMMPHASEFIELDMESSAGE)
    {
      memset(&commphasefieldmessage_, 0x0, sizeof(commphasefieldmessage_));

      if( commphasefieldmessage )
      {
        memcpy(&commphasefieldmessage_, commphasefieldmessage, sizeof(commphasefieldmessage_));
      }
    }

    virtual ~CommPhaseFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CommPhaseFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CommPhaseFieldMessage not support this function");
    }

    CThostFtdcCommPhaseField commphasefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CommPhaseFieldMessage const& aCommPhaseFieldMessage)
{
    os <<std::endl;
    os <<"## CommPhaseFieldMessage ##" <<std::endl;
    os <<aCommPhaseFieldMessage.commphasefieldmessage_; 
    os <<"## end CommPhaseFieldMessage ##" <<std::endl;
}

class LoginInfoFieldMessage : public FieldMessage
{
  public:
    LoginInfoFieldMessage(const CThostFtdcLoginInfoField* logininfofieldmessage):
      type_(LOGININFOFIELDMESSAGE)
    {
      memset(&logininfofieldmessage_, 0x0, sizeof(logininfofieldmessage_));

      if( logininfofieldmessage )
      {
        memcpy(&logininfofieldmessage_, logininfofieldmessage, sizeof(logininfofieldmessage_));
      }
    }

    virtual ~LoginInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type LoginInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type LoginInfoFieldMessage not support this function");
    }

    CThostFtdcLoginInfoField logininfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, LoginInfoFieldMessage const& aLoginInfoFieldMessage)
{
    os <<std::endl;
    os <<"## LoginInfoFieldMessage ##" <<std::endl;
    os <<aLoginInfoFieldMessage.logininfofieldmessage_; 
    os <<"## end LoginInfoFieldMessage ##" <<std::endl;
}

class LogoutAllFieldMessage : public FieldMessage
{
  public:
    LogoutAllFieldMessage(const CThostFtdcLogoutAllField* logoutallfieldmessage):
      type_(LOGOUTALLFIELDMESSAGE)
    {
      memset(&logoutallfieldmessage_, 0x0, sizeof(logoutallfieldmessage_));

      if( logoutallfieldmessage )
      {
        memcpy(&logoutallfieldmessage_, logoutallfieldmessage, sizeof(logoutallfieldmessage_));
      }
    }

    virtual ~LogoutAllFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type LogoutAllFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type LogoutAllFieldMessage not support this function");
    }

    CThostFtdcLogoutAllField logoutallfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, LogoutAllFieldMessage const& aLogoutAllFieldMessage)
{
    os <<std::endl;
    os <<"## LogoutAllFieldMessage ##" <<std::endl;
    os <<aLogoutAllFieldMessage.logoutallfieldmessage_; 
    os <<"## end LogoutAllFieldMessage ##" <<std::endl;
}

class FrontStatusFieldMessage : public FieldMessage
{
  public:
    FrontStatusFieldMessage(const CThostFtdcFrontStatusField* frontstatusfieldmessage):
      type_(FRONTSTATUSFIELDMESSAGE)
    {
      memset(&frontstatusfieldmessage_, 0x0, sizeof(frontstatusfieldmessage_));

      if( frontstatusfieldmessage )
      {
        memcpy(&frontstatusfieldmessage_, frontstatusfieldmessage, sizeof(frontstatusfieldmessage_));
      }
    }

    virtual ~FrontStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type FrontStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type FrontStatusFieldMessage not support this function");
    }

    CThostFtdcFrontStatusField frontstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, FrontStatusFieldMessage const& aFrontStatusFieldMessage)
{
    os <<std::endl;
    os <<"## FrontStatusFieldMessage ##" <<std::endl;
    os <<aFrontStatusFieldMessage.frontstatusfieldmessage_; 
    os <<"## end FrontStatusFieldMessage ##" <<std::endl;
}

class UserPasswordUpdateFieldMessage : public FieldMessage
{
  public:
    UserPasswordUpdateFieldMessage(const CThostFtdcUserPasswordUpdateField* userpasswordupdatefieldmessage):
      type_(USERPASSWORDUPDATEFIELDMESSAGE)
    {
      memset(&userpasswordupdatefieldmessage_, 0x0, sizeof(userpasswordupdatefieldmessage_));

      if( userpasswordupdatefieldmessage )
      {
        memcpy(&userpasswordupdatefieldmessage_, userpasswordupdatefieldmessage, sizeof(userpasswordupdatefieldmessage_));
      }
    }

    virtual ~UserPasswordUpdateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserPasswordUpdateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserPasswordUpdateFieldMessage not support this function");
    }

    CThostFtdcUserPasswordUpdateField userpasswordupdatefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserPasswordUpdateFieldMessage const& aUserPasswordUpdateFieldMessage)
{
    os <<std::endl;
    os <<"## UserPasswordUpdateFieldMessage ##" <<std::endl;
    os <<aUserPasswordUpdateFieldMessage.userpasswordupdatefieldmessage_; 
    os <<"## end UserPasswordUpdateFieldMessage ##" <<std::endl;
}

class InputOrderFieldMessage : public FieldMessage
{
  public:
    InputOrderFieldMessage(const CThostFtdcInputOrderField* inputorderfieldmessage):
      type_(INPUTORDERFIELDMESSAGE)
    {
      memset(&inputorderfieldmessage_, 0x0, sizeof(inputorderfieldmessage_));

      if( inputorderfieldmessage )
      {
        memcpy(&inputorderfieldmessage_, inputorderfieldmessage, sizeof(inputorderfieldmessage_));
      }
    }

    virtual ~InputOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputOrderFieldMessage not support this function");
    }

    CThostFtdcInputOrderField inputorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputOrderFieldMessage const& aInputOrderFieldMessage)
{
    os <<std::endl;
    os <<"## InputOrderFieldMessage ##" <<std::endl;
    os <<aInputOrderFieldMessage.inputorderfieldmessage_; 
    os <<"## end InputOrderFieldMessage ##" <<std::endl;
}

class OrderFieldMessage : public FieldMessage
{
  public:
    OrderFieldMessage(const CThostFtdcOrderField* orderfieldmessage):
      type_(ORDERFIELDMESSAGE)
    {
      memset(&orderfieldmessage_, 0x0, sizeof(orderfieldmessage_));

      if( orderfieldmessage )
      {
        memcpy(&orderfieldmessage_, orderfieldmessage, sizeof(orderfieldmessage_));
      }
    }

    virtual ~OrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OrderFieldMessage not support this function");
    }

    CThostFtdcOrderField orderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OrderFieldMessage const& aOrderFieldMessage)
{
    os <<std::endl;
    os <<"## OrderFieldMessage ##" <<std::endl;
    os <<aOrderFieldMessage.orderfieldmessage_; 
    os <<"## end OrderFieldMessage ##" <<std::endl;
}

class ExchangeOrderFieldMessage : public FieldMessage
{
  public:
    ExchangeOrderFieldMessage(const CThostFtdcExchangeOrderField* exchangeorderfieldmessage):
      type_(EXCHANGEORDERFIELDMESSAGE)
    {
      memset(&exchangeorderfieldmessage_, 0x0, sizeof(exchangeorderfieldmessage_));

      if( exchangeorderfieldmessage )
      {
        memcpy(&exchangeorderfieldmessage_, exchangeorderfieldmessage, sizeof(exchangeorderfieldmessage_));
      }
    }

    virtual ~ExchangeOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeOrderFieldMessage not support this function");
    }

    CThostFtdcExchangeOrderField exchangeorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeOrderFieldMessage const& aExchangeOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeOrderFieldMessage ##" <<std::endl;
    os <<aExchangeOrderFieldMessage.exchangeorderfieldmessage_; 
    os <<"## end ExchangeOrderFieldMessage ##" <<std::endl;
}

class ExchangeOrderInsertErrorFieldMessage : public FieldMessage
{
  public:
    ExchangeOrderInsertErrorFieldMessage(const CThostFtdcExchangeOrderInsertErrorField* exchangeorderinserterrorfieldmessage):
      type_(EXCHANGEORDERINSERTERRORFIELDMESSAGE)
    {
      memset(&exchangeorderinserterrorfieldmessage_, 0x0, sizeof(exchangeorderinserterrorfieldmessage_));

      if( exchangeorderinserterrorfieldmessage )
      {
        memcpy(&exchangeorderinserterrorfieldmessage_, exchangeorderinserterrorfieldmessage, sizeof(exchangeorderinserterrorfieldmessage_));
      }
    }

    virtual ~ExchangeOrderInsertErrorFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeOrderInsertErrorFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeOrderInsertErrorFieldMessage not support this function");
    }

    CThostFtdcExchangeOrderInsertErrorField exchangeorderinserterrorfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeOrderInsertErrorFieldMessage const& aExchangeOrderInsertErrorFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeOrderInsertErrorFieldMessage ##" <<std::endl;
    os <<aExchangeOrderInsertErrorFieldMessage.exchangeorderinserterrorfieldmessage_; 
    os <<"## end ExchangeOrderInsertErrorFieldMessage ##" <<std::endl;
}

class InputOrderActionFieldMessage : public FieldMessage
{
  public:
    InputOrderActionFieldMessage(const CThostFtdcInputOrderActionField* inputorderactionfieldmessage):
      type_(INPUTORDERACTIONFIELDMESSAGE)
    {
      memset(&inputorderactionfieldmessage_, 0x0, sizeof(inputorderactionfieldmessage_));

      if( inputorderactionfieldmessage )
      {
        memcpy(&inputorderactionfieldmessage_, inputorderactionfieldmessage, sizeof(inputorderactionfieldmessage_));
      }
    }

    virtual ~InputOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputOrderActionFieldMessage not support this function");
    }

    CThostFtdcInputOrderActionField inputorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputOrderActionFieldMessage const& aInputOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## InputOrderActionFieldMessage ##" <<std::endl;
    os <<aInputOrderActionFieldMessage.inputorderactionfieldmessage_; 
    os <<"## end InputOrderActionFieldMessage ##" <<std::endl;
}

class OrderActionFieldMessage : public FieldMessage
{
  public:
    OrderActionFieldMessage(const CThostFtdcOrderActionField* orderactionfieldmessage):
      type_(ORDERACTIONFIELDMESSAGE)
    {
      memset(&orderactionfieldmessage_, 0x0, sizeof(orderactionfieldmessage_));

      if( orderactionfieldmessage )
      {
        memcpy(&orderactionfieldmessage_, orderactionfieldmessage, sizeof(orderactionfieldmessage_));
      }
    }

    virtual ~OrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OrderActionFieldMessage not support this function");
    }

    CThostFtdcOrderActionField orderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OrderActionFieldMessage const& aOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## OrderActionFieldMessage ##" <<std::endl;
    os <<aOrderActionFieldMessage.orderactionfieldmessage_; 
    os <<"## end OrderActionFieldMessage ##" <<std::endl;
}

class ExchangeOrderActionFieldMessage : public FieldMessage
{
  public:
    ExchangeOrderActionFieldMessage(const CThostFtdcExchangeOrderActionField* exchangeorderactionfieldmessage):
      type_(EXCHANGEORDERACTIONFIELDMESSAGE)
    {
      memset(&exchangeorderactionfieldmessage_, 0x0, sizeof(exchangeorderactionfieldmessage_));

      if( exchangeorderactionfieldmessage )
      {
        memcpy(&exchangeorderactionfieldmessage_, exchangeorderactionfieldmessage, sizeof(exchangeorderactionfieldmessage_));
      }
    }

    virtual ~ExchangeOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeOrderActionFieldMessage not support this function");
    }

    CThostFtdcExchangeOrderActionField exchangeorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeOrderActionFieldMessage const& aExchangeOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeOrderActionFieldMessage ##" <<std::endl;
    os <<aExchangeOrderActionFieldMessage.exchangeorderactionfieldmessage_; 
    os <<"## end ExchangeOrderActionFieldMessage ##" <<std::endl;
}

class ExchangeOrderActionErrorFieldMessage : public FieldMessage
{
  public:
    ExchangeOrderActionErrorFieldMessage(const CThostFtdcExchangeOrderActionErrorField* exchangeorderactionerrorfieldmessage):
      type_(EXCHANGEORDERACTIONERRORFIELDMESSAGE)
    {
      memset(&exchangeorderactionerrorfieldmessage_, 0x0, sizeof(exchangeorderactionerrorfieldmessage_));

      if( exchangeorderactionerrorfieldmessage )
      {
        memcpy(&exchangeorderactionerrorfieldmessage_, exchangeorderactionerrorfieldmessage, sizeof(exchangeorderactionerrorfieldmessage_));
      }
    }

    virtual ~ExchangeOrderActionErrorFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeOrderActionErrorFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeOrderActionErrorFieldMessage not support this function");
    }

    CThostFtdcExchangeOrderActionErrorField exchangeorderactionerrorfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeOrderActionErrorFieldMessage const& aExchangeOrderActionErrorFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeOrderActionErrorFieldMessage ##" <<std::endl;
    os <<aExchangeOrderActionErrorFieldMessage.exchangeorderactionerrorfieldmessage_; 
    os <<"## end ExchangeOrderActionErrorFieldMessage ##" <<std::endl;
}

class ExchangeTradeFieldMessage : public FieldMessage
{
  public:
    ExchangeTradeFieldMessage(const CThostFtdcExchangeTradeField* exchangetradefieldmessage):
      type_(EXCHANGETRADEFIELDMESSAGE)
    {
      memset(&exchangetradefieldmessage_, 0x0, sizeof(exchangetradefieldmessage_));

      if( exchangetradefieldmessage )
      {
        memcpy(&exchangetradefieldmessage_, exchangetradefieldmessage, sizeof(exchangetradefieldmessage_));
      }
    }

    virtual ~ExchangeTradeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeTradeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeTradeFieldMessage not support this function");
    }

    CThostFtdcExchangeTradeField exchangetradefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeTradeFieldMessage const& aExchangeTradeFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeTradeFieldMessage ##" <<std::endl;
    os <<aExchangeTradeFieldMessage.exchangetradefieldmessage_; 
    os <<"## end ExchangeTradeFieldMessage ##" <<std::endl;
}

class TradeFieldMessage : public FieldMessage
{
  public:
    TradeFieldMessage(const CThostFtdcTradeField* tradefieldmessage):
      type_(TRADEFIELDMESSAGE)
    {
      memset(&tradefieldmessage_, 0x0, sizeof(tradefieldmessage_));

      if( tradefieldmessage )
      {
        memcpy(&tradefieldmessage_, tradefieldmessage, sizeof(tradefieldmessage_));
      }
    }

    virtual ~TradeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradeFieldMessage not support this function");
    }

    CThostFtdcTradeField tradefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradeFieldMessage const& aTradeFieldMessage)
{
    os <<std::endl;
    os <<"## TradeFieldMessage ##" <<std::endl;
    os <<aTradeFieldMessage.tradefieldmessage_; 
    os <<"## end TradeFieldMessage ##" <<std::endl;
}

class UserSessionFieldMessage : public FieldMessage
{
  public:
    UserSessionFieldMessage(const CThostFtdcUserSessionField* usersessionfieldmessage):
      type_(USERSESSIONFIELDMESSAGE)
    {
      memset(&usersessionfieldmessage_, 0x0, sizeof(usersessionfieldmessage_));

      if( usersessionfieldmessage )
      {
        memcpy(&usersessionfieldmessage_, usersessionfieldmessage, sizeof(usersessionfieldmessage_));
      }
    }

    virtual ~UserSessionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserSessionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserSessionFieldMessage not support this function");
    }

    CThostFtdcUserSessionField usersessionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserSessionFieldMessage const& aUserSessionFieldMessage)
{
    os <<std::endl;
    os <<"## UserSessionFieldMessage ##" <<std::endl;
    os <<aUserSessionFieldMessage.usersessionfieldmessage_; 
    os <<"## end UserSessionFieldMessage ##" <<std::endl;
}

class QueryMaxOrderVolumeFieldMessage : public FieldMessage
{
  public:
    QueryMaxOrderVolumeFieldMessage(const CThostFtdcQueryMaxOrderVolumeField* querymaxordervolumefieldmessage):
      type_(QUERYMAXORDERVOLUMEFIELDMESSAGE)
    {
      memset(&querymaxordervolumefieldmessage_, 0x0, sizeof(querymaxordervolumefieldmessage_));

      if( querymaxordervolumefieldmessage )
      {
        memcpy(&querymaxordervolumefieldmessage_, querymaxordervolumefieldmessage, sizeof(querymaxordervolumefieldmessage_));
      }
    }

    virtual ~QueryMaxOrderVolumeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QueryMaxOrderVolumeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QueryMaxOrderVolumeFieldMessage not support this function");
    }

    CThostFtdcQueryMaxOrderVolumeField querymaxordervolumefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QueryMaxOrderVolumeFieldMessage const& aQueryMaxOrderVolumeFieldMessage)
{
    os <<std::endl;
    os <<"## QueryMaxOrderVolumeFieldMessage ##" <<std::endl;
    os <<aQueryMaxOrderVolumeFieldMessage.querymaxordervolumefieldmessage_; 
    os <<"## end QueryMaxOrderVolumeFieldMessage ##" <<std::endl;
}

class SettlementInfoConfirmFieldMessage : public FieldMessage
{
  public:
    SettlementInfoConfirmFieldMessage(const CThostFtdcSettlementInfoConfirmField* settlementinfoconfirmfieldmessage):
      type_(SETTLEMENTINFOCONFIRMFIELDMESSAGE)
    {
      memset(&settlementinfoconfirmfieldmessage_, 0x0, sizeof(settlementinfoconfirmfieldmessage_));

      if( settlementinfoconfirmfieldmessage )
      {
        memcpy(&settlementinfoconfirmfieldmessage_, settlementinfoconfirmfieldmessage, sizeof(settlementinfoconfirmfieldmessage_));
      }
    }

    virtual ~SettlementInfoConfirmFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SettlementInfoConfirmFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SettlementInfoConfirmFieldMessage not support this function");
    }

    CThostFtdcSettlementInfoConfirmField settlementinfoconfirmfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SettlementInfoConfirmFieldMessage const& aSettlementInfoConfirmFieldMessage)
{
    os <<std::endl;
    os <<"## SettlementInfoConfirmFieldMessage ##" <<std::endl;
    os <<aSettlementInfoConfirmFieldMessage.settlementinfoconfirmfieldmessage_; 
    os <<"## end SettlementInfoConfirmFieldMessage ##" <<std::endl;
}

class SyncDepositFieldMessage : public FieldMessage
{
  public:
    SyncDepositFieldMessage(const CThostFtdcSyncDepositField* syncdepositfieldmessage):
      type_(SYNCDEPOSITFIELDMESSAGE)
    {
      memset(&syncdepositfieldmessage_, 0x0, sizeof(syncdepositfieldmessage_));

      if( syncdepositfieldmessage )
      {
        memcpy(&syncdepositfieldmessage_, syncdepositfieldmessage, sizeof(syncdepositfieldmessage_));
      }
    }

    virtual ~SyncDepositFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncDepositFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncDepositFieldMessage not support this function");
    }

    CThostFtdcSyncDepositField syncdepositfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncDepositFieldMessage const& aSyncDepositFieldMessage)
{
    os <<std::endl;
    os <<"## SyncDepositFieldMessage ##" <<std::endl;
    os <<aSyncDepositFieldMessage.syncdepositfieldmessage_; 
    os <<"## end SyncDepositFieldMessage ##" <<std::endl;
}

class SyncFundMortgageFieldMessage : public FieldMessage
{
  public:
    SyncFundMortgageFieldMessage(const CThostFtdcSyncFundMortgageField* syncfundmortgagefieldmessage):
      type_(SYNCFUNDMORTGAGEFIELDMESSAGE)
    {
      memset(&syncfundmortgagefieldmessage_, 0x0, sizeof(syncfundmortgagefieldmessage_));

      if( syncfundmortgagefieldmessage )
      {
        memcpy(&syncfundmortgagefieldmessage_, syncfundmortgagefieldmessage, sizeof(syncfundmortgagefieldmessage_));
      }
    }

    virtual ~SyncFundMortgageFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncFundMortgageFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncFundMortgageFieldMessage not support this function");
    }

    CThostFtdcSyncFundMortgageField syncfundmortgagefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncFundMortgageFieldMessage const& aSyncFundMortgageFieldMessage)
{
    os <<std::endl;
    os <<"## SyncFundMortgageFieldMessage ##" <<std::endl;
    os <<aSyncFundMortgageFieldMessage.syncfundmortgagefieldmessage_; 
    os <<"## end SyncFundMortgageFieldMessage ##" <<std::endl;
}

class BrokerSyncFieldMessage : public FieldMessage
{
  public:
    BrokerSyncFieldMessage(const CThostFtdcBrokerSyncField* brokersyncfieldmessage):
      type_(BROKERSYNCFIELDMESSAGE)
    {
      memset(&brokersyncfieldmessage_, 0x0, sizeof(brokersyncfieldmessage_));

      if( brokersyncfieldmessage )
      {
        memcpy(&brokersyncfieldmessage_, brokersyncfieldmessage, sizeof(brokersyncfieldmessage_));
      }
    }

    virtual ~BrokerSyncFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerSyncFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerSyncFieldMessage not support this function");
    }

    CThostFtdcBrokerSyncField brokersyncfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerSyncFieldMessage const& aBrokerSyncFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerSyncFieldMessage ##" <<std::endl;
    os <<aBrokerSyncFieldMessage.brokersyncfieldmessage_; 
    os <<"## end BrokerSyncFieldMessage ##" <<std::endl;
}

class SyncingInvestorFieldMessage : public FieldMessage
{
  public:
    SyncingInvestorFieldMessage(const CThostFtdcSyncingInvestorField* syncinginvestorfieldmessage):
      type_(SYNCINGINVESTORFIELDMESSAGE)
    {
      memset(&syncinginvestorfieldmessage_, 0x0, sizeof(syncinginvestorfieldmessage_));

      if( syncinginvestorfieldmessage )
      {
        memcpy(&syncinginvestorfieldmessage_, syncinginvestorfieldmessage, sizeof(syncinginvestorfieldmessage_));
      }
    }

    virtual ~SyncingInvestorFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInvestorFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInvestorFieldMessage not support this function");
    }

    CThostFtdcSyncingInvestorField syncinginvestorfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInvestorFieldMessage const& aSyncingInvestorFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInvestorFieldMessage ##" <<std::endl;
    os <<aSyncingInvestorFieldMessage.syncinginvestorfieldmessage_; 
    os <<"## end SyncingInvestorFieldMessage ##" <<std::endl;
}

class SyncingTradingCodeFieldMessage : public FieldMessage
{
  public:
    SyncingTradingCodeFieldMessage(const CThostFtdcSyncingTradingCodeField* syncingtradingcodefieldmessage):
      type_(SYNCINGTRADINGCODEFIELDMESSAGE)
    {
      memset(&syncingtradingcodefieldmessage_, 0x0, sizeof(syncingtradingcodefieldmessage_));

      if( syncingtradingcodefieldmessage )
      {
        memcpy(&syncingtradingcodefieldmessage_, syncingtradingcodefieldmessage, sizeof(syncingtradingcodefieldmessage_));
      }
    }

    virtual ~SyncingTradingCodeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingTradingCodeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingTradingCodeFieldMessage not support this function");
    }

    CThostFtdcSyncingTradingCodeField syncingtradingcodefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingTradingCodeFieldMessage const& aSyncingTradingCodeFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingTradingCodeFieldMessage ##" <<std::endl;
    os <<aSyncingTradingCodeFieldMessage.syncingtradingcodefieldmessage_; 
    os <<"## end SyncingTradingCodeFieldMessage ##" <<std::endl;
}

class SyncingInvestorGroupFieldMessage : public FieldMessage
{
  public:
    SyncingInvestorGroupFieldMessage(const CThostFtdcSyncingInvestorGroupField* syncinginvestorgroupfieldmessage):
      type_(SYNCINGINVESTORGROUPFIELDMESSAGE)
    {
      memset(&syncinginvestorgroupfieldmessage_, 0x0, sizeof(syncinginvestorgroupfieldmessage_));

      if( syncinginvestorgroupfieldmessage )
      {
        memcpy(&syncinginvestorgroupfieldmessage_, syncinginvestorgroupfieldmessage, sizeof(syncinginvestorgroupfieldmessage_));
      }
    }

    virtual ~SyncingInvestorGroupFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInvestorGroupFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInvestorGroupFieldMessage not support this function");
    }

    CThostFtdcSyncingInvestorGroupField syncinginvestorgroupfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInvestorGroupFieldMessage const& aSyncingInvestorGroupFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInvestorGroupFieldMessage ##" <<std::endl;
    os <<aSyncingInvestorGroupFieldMessage.syncinginvestorgroupfieldmessage_; 
    os <<"## end SyncingInvestorGroupFieldMessage ##" <<std::endl;
}

class SyncingTradingAccountFieldMessage : public FieldMessage
{
  public:
    SyncingTradingAccountFieldMessage(const CThostFtdcSyncingTradingAccountField* syncingtradingaccountfieldmessage):
      type_(SYNCINGTRADINGACCOUNTFIELDMESSAGE)
    {
      memset(&syncingtradingaccountfieldmessage_, 0x0, sizeof(syncingtradingaccountfieldmessage_));

      if( syncingtradingaccountfieldmessage )
      {
        memcpy(&syncingtradingaccountfieldmessage_, syncingtradingaccountfieldmessage, sizeof(syncingtradingaccountfieldmessage_));
      }
    }

    virtual ~SyncingTradingAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingTradingAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingTradingAccountFieldMessage not support this function");
    }

    CThostFtdcSyncingTradingAccountField syncingtradingaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingTradingAccountFieldMessage const& aSyncingTradingAccountFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingTradingAccountFieldMessage ##" <<std::endl;
    os <<aSyncingTradingAccountFieldMessage.syncingtradingaccountfieldmessage_; 
    os <<"## end SyncingTradingAccountFieldMessage ##" <<std::endl;
}

class SyncingInvestorPositionFieldMessage : public FieldMessage
{
  public:
    SyncingInvestorPositionFieldMessage(const CThostFtdcSyncingInvestorPositionField* syncinginvestorpositionfieldmessage):
      type_(SYNCINGINVESTORPOSITIONFIELDMESSAGE)
    {
      memset(&syncinginvestorpositionfieldmessage_, 0x0, sizeof(syncinginvestorpositionfieldmessage_));

      if( syncinginvestorpositionfieldmessage )
      {
        memcpy(&syncinginvestorpositionfieldmessage_, syncinginvestorpositionfieldmessage, sizeof(syncinginvestorpositionfieldmessage_));
      }
    }

    virtual ~SyncingInvestorPositionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInvestorPositionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInvestorPositionFieldMessage not support this function");
    }

    CThostFtdcSyncingInvestorPositionField syncinginvestorpositionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInvestorPositionFieldMessage const& aSyncingInvestorPositionFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInvestorPositionFieldMessage ##" <<std::endl;
    os <<aSyncingInvestorPositionFieldMessage.syncinginvestorpositionfieldmessage_; 
    os <<"## end SyncingInvestorPositionFieldMessage ##" <<std::endl;
}

class SyncingInstrumentMarginRateFieldMessage : public FieldMessage
{
  public:
    SyncingInstrumentMarginRateFieldMessage(const CThostFtdcSyncingInstrumentMarginRateField* syncinginstrumentmarginratefieldmessage):
      type_(SYNCINGINSTRUMENTMARGINRATEFIELDMESSAGE)
    {
      memset(&syncinginstrumentmarginratefieldmessage_, 0x0, sizeof(syncinginstrumentmarginratefieldmessage_));

      if( syncinginstrumentmarginratefieldmessage )
      {
        memcpy(&syncinginstrumentmarginratefieldmessage_, syncinginstrumentmarginratefieldmessage, sizeof(syncinginstrumentmarginratefieldmessage_));
      }
    }

    virtual ~SyncingInstrumentMarginRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentMarginRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentMarginRateFieldMessage not support this function");
    }

    CThostFtdcSyncingInstrumentMarginRateField syncinginstrumentmarginratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInstrumentMarginRateFieldMessage const& aSyncingInstrumentMarginRateFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInstrumentMarginRateFieldMessage ##" <<std::endl;
    os <<aSyncingInstrumentMarginRateFieldMessage.syncinginstrumentmarginratefieldmessage_; 
    os <<"## end SyncingInstrumentMarginRateFieldMessage ##" <<std::endl;
}

class SyncingInstrumentCommissionRateFieldMessage : public FieldMessage
{
  public:
    SyncingInstrumentCommissionRateFieldMessage(const CThostFtdcSyncingInstrumentCommissionRateField* syncinginstrumentcommissionratefieldmessage):
      type_(SYNCINGINSTRUMENTCOMMISSIONRATEFIELDMESSAGE)
    {
      memset(&syncinginstrumentcommissionratefieldmessage_, 0x0, sizeof(syncinginstrumentcommissionratefieldmessage_));

      if( syncinginstrumentcommissionratefieldmessage )
      {
        memcpy(&syncinginstrumentcommissionratefieldmessage_, syncinginstrumentcommissionratefieldmessage, sizeof(syncinginstrumentcommissionratefieldmessage_));
      }
    }

    virtual ~SyncingInstrumentCommissionRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentCommissionRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentCommissionRateFieldMessage not support this function");
    }

    CThostFtdcSyncingInstrumentCommissionRateField syncinginstrumentcommissionratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInstrumentCommissionRateFieldMessage const& aSyncingInstrumentCommissionRateFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInstrumentCommissionRateFieldMessage ##" <<std::endl;
    os <<aSyncingInstrumentCommissionRateFieldMessage.syncinginstrumentcommissionratefieldmessage_; 
    os <<"## end SyncingInstrumentCommissionRateFieldMessage ##" <<std::endl;
}

class SyncingInstrumentTradingRightFieldMessage : public FieldMessage
{
  public:
    SyncingInstrumentTradingRightFieldMessage(const CThostFtdcSyncingInstrumentTradingRightField* syncinginstrumenttradingrightfieldmessage):
      type_(SYNCINGINSTRUMENTTRADINGRIGHTFIELDMESSAGE)
    {
      memset(&syncinginstrumenttradingrightfieldmessage_, 0x0, sizeof(syncinginstrumenttradingrightfieldmessage_));

      if( syncinginstrumenttradingrightfieldmessage )
      {
        memcpy(&syncinginstrumenttradingrightfieldmessage_, syncinginstrumenttradingrightfieldmessage, sizeof(syncinginstrumenttradingrightfieldmessage_));
      }
    }

    virtual ~SyncingInstrumentTradingRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentTradingRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncingInstrumentTradingRightFieldMessage not support this function");
    }

    CThostFtdcSyncingInstrumentTradingRightField syncinginstrumenttradingrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncingInstrumentTradingRightFieldMessage const& aSyncingInstrumentTradingRightFieldMessage)
{
    os <<std::endl;
    os <<"## SyncingInstrumentTradingRightFieldMessage ##" <<std::endl;
    os <<aSyncingInstrumentTradingRightFieldMessage.syncinginstrumenttradingrightfieldmessage_; 
    os <<"## end SyncingInstrumentTradingRightFieldMessage ##" <<std::endl;
}

class QryOrderFieldMessage : public FieldMessage
{
  public:
    QryOrderFieldMessage(const CThostFtdcQryOrderField* qryorderfieldmessage):
      type_(QRYORDERFIELDMESSAGE)
    {
      memset(&qryorderfieldmessage_, 0x0, sizeof(qryorderfieldmessage_));

      if( qryorderfieldmessage )
      {
        memcpy(&qryorderfieldmessage_, qryorderfieldmessage, sizeof(qryorderfieldmessage_));
      }
    }

    virtual ~QryOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryOrderFieldMessage not support this function");
    }

    CThostFtdcQryOrderField qryorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryOrderFieldMessage const& aQryOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryOrderFieldMessage ##" <<std::endl;
    os <<aQryOrderFieldMessage.qryorderfieldmessage_; 
    os <<"## end QryOrderFieldMessage ##" <<std::endl;
}

class QryTradeFieldMessage : public FieldMessage
{
  public:
    QryTradeFieldMessage(const CThostFtdcQryTradeField* qrytradefieldmessage):
      type_(QRYTRADEFIELDMESSAGE)
    {
      memset(&qrytradefieldmessage_, 0x0, sizeof(qrytradefieldmessage_));

      if( qrytradefieldmessage )
      {
        memcpy(&qrytradefieldmessage_, qrytradefieldmessage, sizeof(qrytradefieldmessage_));
      }
    }

    virtual ~QryTradeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTradeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTradeFieldMessage not support this function");
    }

    CThostFtdcQryTradeField qrytradefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTradeFieldMessage const& aQryTradeFieldMessage)
{
    os <<std::endl;
    os <<"## QryTradeFieldMessage ##" <<std::endl;
    os <<aQryTradeFieldMessage.qrytradefieldmessage_; 
    os <<"## end QryTradeFieldMessage ##" <<std::endl;
}

class QryInvestorPositionFieldMessage : public FieldMessage
{
  public:
    QryInvestorPositionFieldMessage(const CThostFtdcQryInvestorPositionField* qryinvestorpositionfieldmessage):
      type_(QRYINVESTORPOSITIONFIELDMESSAGE)
    {
      memset(&qryinvestorpositionfieldmessage_, 0x0, sizeof(qryinvestorpositionfieldmessage_));

      if( qryinvestorpositionfieldmessage )
      {
        memcpy(&qryinvestorpositionfieldmessage_, qryinvestorpositionfieldmessage, sizeof(qryinvestorpositionfieldmessage_));
      }
    }

    virtual ~QryInvestorPositionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionFieldMessage not support this function");
    }

    CThostFtdcQryInvestorPositionField qryinvestorpositionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorPositionFieldMessage const& aQryInvestorPositionFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorPositionFieldMessage ##" <<std::endl;
    os <<aQryInvestorPositionFieldMessage.qryinvestorpositionfieldmessage_; 
    os <<"## end QryInvestorPositionFieldMessage ##" <<std::endl;
}

class QryTradingAccountFieldMessage : public FieldMessage
{
  public:
    QryTradingAccountFieldMessage(const CThostFtdcQryTradingAccountField* qrytradingaccountfieldmessage):
      type_(QRYTRADINGACCOUNTFIELDMESSAGE)
    {
      memset(&qrytradingaccountfieldmessage_, 0x0, sizeof(qrytradingaccountfieldmessage_));

      if( qrytradingaccountfieldmessage )
      {
        memcpy(&qrytradingaccountfieldmessage_, qrytradingaccountfieldmessage, sizeof(qrytradingaccountfieldmessage_));
      }
    }

    virtual ~QryTradingAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTradingAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTradingAccountFieldMessage not support this function");
    }

    CThostFtdcQryTradingAccountField qrytradingaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTradingAccountFieldMessage const& aQryTradingAccountFieldMessage)
{
    os <<std::endl;
    os <<"## QryTradingAccountFieldMessage ##" <<std::endl;
    os <<aQryTradingAccountFieldMessage.qrytradingaccountfieldmessage_; 
    os <<"## end QryTradingAccountFieldMessage ##" <<std::endl;
}

class QryInvestorFieldMessage : public FieldMessage
{
  public:
    QryInvestorFieldMessage(const CThostFtdcQryInvestorField* qryinvestorfieldmessage):
      type_(QRYINVESTORFIELDMESSAGE)
    {
      memset(&qryinvestorfieldmessage_, 0x0, sizeof(qryinvestorfieldmessage_));

      if( qryinvestorfieldmessage )
      {
        memcpy(&qryinvestorfieldmessage_, qryinvestorfieldmessage, sizeof(qryinvestorfieldmessage_));
      }
    }

    virtual ~QryInvestorFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorFieldMessage not support this function");
    }

    CThostFtdcQryInvestorField qryinvestorfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorFieldMessage const& aQryInvestorFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorFieldMessage ##" <<std::endl;
    os <<aQryInvestorFieldMessage.qryinvestorfieldmessage_; 
    os <<"## end QryInvestorFieldMessage ##" <<std::endl;
}

class QryTradingCodeFieldMessage : public FieldMessage
{
  public:
    QryTradingCodeFieldMessage(const CThostFtdcQryTradingCodeField* qrytradingcodefieldmessage):
      type_(QRYTRADINGCODEFIELDMESSAGE)
    {
      memset(&qrytradingcodefieldmessage_, 0x0, sizeof(qrytradingcodefieldmessage_));

      if( qrytradingcodefieldmessage )
      {
        memcpy(&qrytradingcodefieldmessage_, qrytradingcodefieldmessage, sizeof(qrytradingcodefieldmessage_));
      }
    }

    virtual ~QryTradingCodeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTradingCodeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTradingCodeFieldMessage not support this function");
    }

    CThostFtdcQryTradingCodeField qrytradingcodefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTradingCodeFieldMessage const& aQryTradingCodeFieldMessage)
{
    os <<std::endl;
    os <<"## QryTradingCodeFieldMessage ##" <<std::endl;
    os <<aQryTradingCodeFieldMessage.qrytradingcodefieldmessage_; 
    os <<"## end QryTradingCodeFieldMessage ##" <<std::endl;
}

class QryInvestorGroupFieldMessage : public FieldMessage
{
  public:
    QryInvestorGroupFieldMessage(const CThostFtdcQryInvestorGroupField* qryinvestorgroupfieldmessage):
      type_(QRYINVESTORGROUPFIELDMESSAGE)
    {
      memset(&qryinvestorgroupfieldmessage_, 0x0, sizeof(qryinvestorgroupfieldmessage_));

      if( qryinvestorgroupfieldmessage )
      {
        memcpy(&qryinvestorgroupfieldmessage_, qryinvestorgroupfieldmessage, sizeof(qryinvestorgroupfieldmessage_));
      }
    }

    virtual ~QryInvestorGroupFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorGroupFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorGroupFieldMessage not support this function");
    }

    CThostFtdcQryInvestorGroupField qryinvestorgroupfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorGroupFieldMessage const& aQryInvestorGroupFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorGroupFieldMessage ##" <<std::endl;
    os <<aQryInvestorGroupFieldMessage.qryinvestorgroupfieldmessage_; 
    os <<"## end QryInvestorGroupFieldMessage ##" <<std::endl;
}

class QryInstrumentMarginRateFieldMessage : public FieldMessage
{
  public:
    QryInstrumentMarginRateFieldMessage(const CThostFtdcQryInstrumentMarginRateField* qryinstrumentmarginratefieldmessage):
      type_(QRYINSTRUMENTMARGINRATEFIELDMESSAGE)
    {
      memset(&qryinstrumentmarginratefieldmessage_, 0x0, sizeof(qryinstrumentmarginratefieldmessage_));

      if( qryinstrumentmarginratefieldmessage )
      {
        memcpy(&qryinstrumentmarginratefieldmessage_, qryinstrumentmarginratefieldmessage, sizeof(qryinstrumentmarginratefieldmessage_));
      }
    }

    virtual ~QryInstrumentMarginRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInstrumentMarginRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInstrumentMarginRateFieldMessage not support this function");
    }

    CThostFtdcQryInstrumentMarginRateField qryinstrumentmarginratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInstrumentMarginRateFieldMessage const& aQryInstrumentMarginRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryInstrumentMarginRateFieldMessage ##" <<std::endl;
    os <<aQryInstrumentMarginRateFieldMessage.qryinstrumentmarginratefieldmessage_; 
    os <<"## end QryInstrumentMarginRateFieldMessage ##" <<std::endl;
}

class QryInstrumentCommissionRateFieldMessage : public FieldMessage
{
  public:
    QryInstrumentCommissionRateFieldMessage(const CThostFtdcQryInstrumentCommissionRateField* qryinstrumentcommissionratefieldmessage):
      type_(QRYINSTRUMENTCOMMISSIONRATEFIELDMESSAGE)
    {
      memset(&qryinstrumentcommissionratefieldmessage_, 0x0, sizeof(qryinstrumentcommissionratefieldmessage_));

      if( qryinstrumentcommissionratefieldmessage )
      {
        memcpy(&qryinstrumentcommissionratefieldmessage_, qryinstrumentcommissionratefieldmessage, sizeof(qryinstrumentcommissionratefieldmessage_));
      }
    }

    virtual ~QryInstrumentCommissionRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInstrumentCommissionRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInstrumentCommissionRateFieldMessage not support this function");
    }

    CThostFtdcQryInstrumentCommissionRateField qryinstrumentcommissionratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInstrumentCommissionRateFieldMessage const& aQryInstrumentCommissionRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryInstrumentCommissionRateFieldMessage ##" <<std::endl;
    os <<aQryInstrumentCommissionRateFieldMessage.qryinstrumentcommissionratefieldmessage_; 
    os <<"## end QryInstrumentCommissionRateFieldMessage ##" <<std::endl;
}

class QryInstrumentTradingRightFieldMessage : public FieldMessage
{
  public:
    QryInstrumentTradingRightFieldMessage(const CThostFtdcQryInstrumentTradingRightField* qryinstrumenttradingrightfieldmessage):
      type_(QRYINSTRUMENTTRADINGRIGHTFIELDMESSAGE)
    {
      memset(&qryinstrumenttradingrightfieldmessage_, 0x0, sizeof(qryinstrumenttradingrightfieldmessage_));

      if( qryinstrumenttradingrightfieldmessage )
      {
        memcpy(&qryinstrumenttradingrightfieldmessage_, qryinstrumenttradingrightfieldmessage, sizeof(qryinstrumenttradingrightfieldmessage_));
      }
    }

    virtual ~QryInstrumentTradingRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInstrumentTradingRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInstrumentTradingRightFieldMessage not support this function");
    }

    CThostFtdcQryInstrumentTradingRightField qryinstrumenttradingrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInstrumentTradingRightFieldMessage const& aQryInstrumentTradingRightFieldMessage)
{
    os <<std::endl;
    os <<"## QryInstrumentTradingRightFieldMessage ##" <<std::endl;
    os <<aQryInstrumentTradingRightFieldMessage.qryinstrumenttradingrightfieldmessage_; 
    os <<"## end QryInstrumentTradingRightFieldMessage ##" <<std::endl;
}

class QryBrokerFieldMessage : public FieldMessage
{
  public:
    QryBrokerFieldMessage(const CThostFtdcQryBrokerField* qrybrokerfieldmessage):
      type_(QRYBROKERFIELDMESSAGE)
    {
      memset(&qrybrokerfieldmessage_, 0x0, sizeof(qrybrokerfieldmessage_));

      if( qrybrokerfieldmessage )
      {
        memcpy(&qrybrokerfieldmessage_, qrybrokerfieldmessage, sizeof(qrybrokerfieldmessage_));
      }
    }

    virtual ~QryBrokerFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerFieldMessage not support this function");
    }

    CThostFtdcQryBrokerField qrybrokerfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerFieldMessage const& aQryBrokerFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerFieldMessage ##" <<std::endl;
    os <<aQryBrokerFieldMessage.qrybrokerfieldmessage_; 
    os <<"## end QryBrokerFieldMessage ##" <<std::endl;
}

class QryTraderFieldMessage : public FieldMessage
{
  public:
    QryTraderFieldMessage(const CThostFtdcQryTraderField* qrytraderfieldmessage):
      type_(QRYTRADERFIELDMESSAGE)
    {
      memset(&qrytraderfieldmessage_, 0x0, sizeof(qrytraderfieldmessage_));

      if( qrytraderfieldmessage )
      {
        memcpy(&qrytraderfieldmessage_, qrytraderfieldmessage, sizeof(qrytraderfieldmessage_));
      }
    }

    virtual ~QryTraderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTraderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTraderFieldMessage not support this function");
    }

    CThostFtdcQryTraderField qrytraderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTraderFieldMessage const& aQryTraderFieldMessage)
{
    os <<std::endl;
    os <<"## QryTraderFieldMessage ##" <<std::endl;
    os <<aQryTraderFieldMessage.qrytraderfieldmessage_; 
    os <<"## end QryTraderFieldMessage ##" <<std::endl;
}

class QrySuperUserFunctionFieldMessage : public FieldMessage
{
  public:
    QrySuperUserFunctionFieldMessage(const CThostFtdcQrySuperUserFunctionField* qrysuperuserfunctionfieldmessage):
      type_(QRYSUPERUSERFUNCTIONFIELDMESSAGE)
    {
      memset(&qrysuperuserfunctionfieldmessage_, 0x0, sizeof(qrysuperuserfunctionfieldmessage_));

      if( qrysuperuserfunctionfieldmessage )
      {
        memcpy(&qrysuperuserfunctionfieldmessage_, qrysuperuserfunctionfieldmessage, sizeof(qrysuperuserfunctionfieldmessage_));
      }
    }

    virtual ~QrySuperUserFunctionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySuperUserFunctionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySuperUserFunctionFieldMessage not support this function");
    }

    CThostFtdcQrySuperUserFunctionField qrysuperuserfunctionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySuperUserFunctionFieldMessage const& aQrySuperUserFunctionFieldMessage)
{
    os <<std::endl;
    os <<"## QrySuperUserFunctionFieldMessage ##" <<std::endl;
    os <<aQrySuperUserFunctionFieldMessage.qrysuperuserfunctionfieldmessage_; 
    os <<"## end QrySuperUserFunctionFieldMessage ##" <<std::endl;
}

class QryUserSessionFieldMessage : public FieldMessage
{
  public:
    QryUserSessionFieldMessage(const CThostFtdcQryUserSessionField* qryusersessionfieldmessage):
      type_(QRYUSERSESSIONFIELDMESSAGE)
    {
      memset(&qryusersessionfieldmessage_, 0x0, sizeof(qryusersessionfieldmessage_));

      if( qryusersessionfieldmessage )
      {
        memcpy(&qryusersessionfieldmessage_, qryusersessionfieldmessage, sizeof(qryusersessionfieldmessage_));
      }
    }

    virtual ~QryUserSessionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryUserSessionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryUserSessionFieldMessage not support this function");
    }

    CThostFtdcQryUserSessionField qryusersessionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryUserSessionFieldMessage const& aQryUserSessionFieldMessage)
{
    os <<std::endl;
    os <<"## QryUserSessionFieldMessage ##" <<std::endl;
    os <<aQryUserSessionFieldMessage.qryusersessionfieldmessage_; 
    os <<"## end QryUserSessionFieldMessage ##" <<std::endl;
}

class QryPartBrokerFieldMessage : public FieldMessage
{
  public:
    QryPartBrokerFieldMessage(const CThostFtdcQryPartBrokerField* qrypartbrokerfieldmessage):
      type_(QRYPARTBROKERFIELDMESSAGE)
    {
      memset(&qrypartbrokerfieldmessage_, 0x0, sizeof(qrypartbrokerfieldmessage_));

      if( qrypartbrokerfieldmessage )
      {
        memcpy(&qrypartbrokerfieldmessage_, qrypartbrokerfieldmessage, sizeof(qrypartbrokerfieldmessage_));
      }
    }

    virtual ~QryPartBrokerFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryPartBrokerFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryPartBrokerFieldMessage not support this function");
    }

    CThostFtdcQryPartBrokerField qrypartbrokerfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryPartBrokerFieldMessage const& aQryPartBrokerFieldMessage)
{
    os <<std::endl;
    os <<"## QryPartBrokerFieldMessage ##" <<std::endl;
    os <<aQryPartBrokerFieldMessage.qrypartbrokerfieldmessage_; 
    os <<"## end QryPartBrokerFieldMessage ##" <<std::endl;
}

class QryFrontStatusFieldMessage : public FieldMessage
{
  public:
    QryFrontStatusFieldMessage(const CThostFtdcQryFrontStatusField* qryfrontstatusfieldmessage):
      type_(QRYFRONTSTATUSFIELDMESSAGE)
    {
      memset(&qryfrontstatusfieldmessage_, 0x0, sizeof(qryfrontstatusfieldmessage_));

      if( qryfrontstatusfieldmessage )
      {
        memcpy(&qryfrontstatusfieldmessage_, qryfrontstatusfieldmessage, sizeof(qryfrontstatusfieldmessage_));
      }
    }

    virtual ~QryFrontStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryFrontStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryFrontStatusFieldMessage not support this function");
    }

    CThostFtdcQryFrontStatusField qryfrontstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryFrontStatusFieldMessage const& aQryFrontStatusFieldMessage)
{
    os <<std::endl;
    os <<"## QryFrontStatusFieldMessage ##" <<std::endl;
    os <<aQryFrontStatusFieldMessage.qryfrontstatusfieldmessage_; 
    os <<"## end QryFrontStatusFieldMessage ##" <<std::endl;
}

class QryExchangeOrderFieldMessage : public FieldMessage
{
  public:
    QryExchangeOrderFieldMessage(const CThostFtdcQryExchangeOrderField* qryexchangeorderfieldmessage):
      type_(QRYEXCHANGEORDERFIELDMESSAGE)
    {
      memset(&qryexchangeorderfieldmessage_, 0x0, sizeof(qryexchangeorderfieldmessage_));

      if( qryexchangeorderfieldmessage )
      {
        memcpy(&qryexchangeorderfieldmessage_, qryexchangeorderfieldmessage, sizeof(qryexchangeorderfieldmessage_));
      }
    }

    virtual ~QryExchangeOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeOrderFieldMessage not support this function");
    }

    CThostFtdcQryExchangeOrderField qryexchangeorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeOrderFieldMessage const& aQryExchangeOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeOrderFieldMessage ##" <<std::endl;
    os <<aQryExchangeOrderFieldMessage.qryexchangeorderfieldmessage_; 
    os <<"## end QryExchangeOrderFieldMessage ##" <<std::endl;
}

class QryOrderActionFieldMessage : public FieldMessage
{
  public:
    QryOrderActionFieldMessage(const CThostFtdcQryOrderActionField* qryorderactionfieldmessage):
      type_(QRYORDERACTIONFIELDMESSAGE)
    {
      memset(&qryorderactionfieldmessage_, 0x0, sizeof(qryorderactionfieldmessage_));

      if( qryorderactionfieldmessage )
      {
        memcpy(&qryorderactionfieldmessage_, qryorderactionfieldmessage, sizeof(qryorderactionfieldmessage_));
      }
    }

    virtual ~QryOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryOrderActionField qryorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryOrderActionFieldMessage const& aQryOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryOrderActionFieldMessage ##" <<std::endl;
    os <<aQryOrderActionFieldMessage.qryorderactionfieldmessage_; 
    os <<"## end QryOrderActionFieldMessage ##" <<std::endl;
}

class QryExchangeOrderActionFieldMessage : public FieldMessage
{
  public:
    QryExchangeOrderActionFieldMessage(const CThostFtdcQryExchangeOrderActionField* qryexchangeorderactionfieldmessage):
      type_(QRYEXCHANGEORDERACTIONFIELDMESSAGE)
    {
      memset(&qryexchangeorderactionfieldmessage_, 0x0, sizeof(qryexchangeorderactionfieldmessage_));

      if( qryexchangeorderactionfieldmessage )
      {
        memcpy(&qryexchangeorderactionfieldmessage_, qryexchangeorderactionfieldmessage, sizeof(qryexchangeorderactionfieldmessage_));
      }
    }

    virtual ~QryExchangeOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryExchangeOrderActionField qryexchangeorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeOrderActionFieldMessage const& aQryExchangeOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeOrderActionFieldMessage ##" <<std::endl;
    os <<aQryExchangeOrderActionFieldMessage.qryexchangeorderactionfieldmessage_; 
    os <<"## end QryExchangeOrderActionFieldMessage ##" <<std::endl;
}

class QrySuperUserFieldMessage : public FieldMessage
{
  public:
    QrySuperUserFieldMessage(const CThostFtdcQrySuperUserField* qrysuperuserfieldmessage):
      type_(QRYSUPERUSERFIELDMESSAGE)
    {
      memset(&qrysuperuserfieldmessage_, 0x0, sizeof(qrysuperuserfieldmessage_));

      if( qrysuperuserfieldmessage )
      {
        memcpy(&qrysuperuserfieldmessage_, qrysuperuserfieldmessage, sizeof(qrysuperuserfieldmessage_));
      }
    }

    virtual ~QrySuperUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySuperUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySuperUserFieldMessage not support this function");
    }

    CThostFtdcQrySuperUserField qrysuperuserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySuperUserFieldMessage const& aQrySuperUserFieldMessage)
{
    os <<std::endl;
    os <<"## QrySuperUserFieldMessage ##" <<std::endl;
    os <<aQrySuperUserFieldMessage.qrysuperuserfieldmessage_; 
    os <<"## end QrySuperUserFieldMessage ##" <<std::endl;
}

class QryExchangeFieldMessage : public FieldMessage
{
  public:
    QryExchangeFieldMessage(const CThostFtdcQryExchangeField* qryexchangefieldmessage):
      type_(QRYEXCHANGEFIELDMESSAGE)
    {
      memset(&qryexchangefieldmessage_, 0x0, sizeof(qryexchangefieldmessage_));

      if( qryexchangefieldmessage )
      {
        memcpy(&qryexchangefieldmessage_, qryexchangefieldmessage, sizeof(qryexchangefieldmessage_));
      }
    }

    virtual ~QryExchangeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeFieldMessage not support this function");
    }

    CThostFtdcQryExchangeField qryexchangefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeFieldMessage const& aQryExchangeFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeFieldMessage ##" <<std::endl;
    os <<aQryExchangeFieldMessage.qryexchangefieldmessage_; 
    os <<"## end QryExchangeFieldMessage ##" <<std::endl;
}

class QryProductFieldMessage : public FieldMessage
{
  public:
    QryProductFieldMessage(const CThostFtdcQryProductField* qryproductfieldmessage):
      type_(QRYPRODUCTFIELDMESSAGE)
    {
      memset(&qryproductfieldmessage_, 0x0, sizeof(qryproductfieldmessage_));

      if( qryproductfieldmessage )
      {
        memcpy(&qryproductfieldmessage_, qryproductfieldmessage, sizeof(qryproductfieldmessage_));
      }
    }

    virtual ~QryProductFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryProductFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryProductFieldMessage not support this function");
    }

    CThostFtdcQryProductField qryproductfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryProductFieldMessage const& aQryProductFieldMessage)
{
    os <<std::endl;
    os <<"## QryProductFieldMessage ##" <<std::endl;
    os <<aQryProductFieldMessage.qryproductfieldmessage_; 
    os <<"## end QryProductFieldMessage ##" <<std::endl;
}

class QryInstrumentFieldMessage : public FieldMessage
{
  public:
    QryInstrumentFieldMessage(const CThostFtdcQryInstrumentField* qryinstrumentfieldmessage):
      type_(QRYINSTRUMENTFIELDMESSAGE)
    {
      memset(&qryinstrumentfieldmessage_, 0x0, sizeof(qryinstrumentfieldmessage_));

      if( qryinstrumentfieldmessage )
      {
        memcpy(&qryinstrumentfieldmessage_, qryinstrumentfieldmessage, sizeof(qryinstrumentfieldmessage_));
      }
    }

    virtual ~QryInstrumentFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInstrumentFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInstrumentFieldMessage not support this function");
    }

    CThostFtdcQryInstrumentField qryinstrumentfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInstrumentFieldMessage const& aQryInstrumentFieldMessage)
{
    os <<std::endl;
    os <<"## QryInstrumentFieldMessage ##" <<std::endl;
    os <<aQryInstrumentFieldMessage.qryinstrumentfieldmessage_; 
    os <<"## end QryInstrumentFieldMessage ##" <<std::endl;
}

class QryDepthMarketDataFieldMessage : public FieldMessage
{
  public:
    QryDepthMarketDataFieldMessage(const CThostFtdcQryDepthMarketDataField* qrydepthmarketdatafieldmessage):
      type_(QRYDEPTHMARKETDATAFIELDMESSAGE)
    {
      memset(&qrydepthmarketdatafieldmessage_, 0x0, sizeof(qrydepthmarketdatafieldmessage_));

      if( qrydepthmarketdatafieldmessage )
      {
        memcpy(&qrydepthmarketdatafieldmessage_, qrydepthmarketdatafieldmessage, sizeof(qrydepthmarketdatafieldmessage_));
      }
    }

    virtual ~QryDepthMarketDataFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryDepthMarketDataFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryDepthMarketDataFieldMessage not support this function");
    }

    CThostFtdcQryDepthMarketDataField qrydepthmarketdatafieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryDepthMarketDataFieldMessage const& aQryDepthMarketDataFieldMessage)
{
    os <<std::endl;
    os <<"## QryDepthMarketDataFieldMessage ##" <<std::endl;
    os <<aQryDepthMarketDataFieldMessage.qrydepthmarketdatafieldmessage_; 
    os <<"## end QryDepthMarketDataFieldMessage ##" <<std::endl;
}

class QryBrokerUserFieldMessage : public FieldMessage
{
  public:
    QryBrokerUserFieldMessage(const CThostFtdcQryBrokerUserField* qrybrokeruserfieldmessage):
      type_(QRYBROKERUSERFIELDMESSAGE)
    {
      memset(&qrybrokeruserfieldmessage_, 0x0, sizeof(qrybrokeruserfieldmessage_));

      if( qrybrokeruserfieldmessage )
      {
        memcpy(&qrybrokeruserfieldmessage_, qrybrokeruserfieldmessage, sizeof(qrybrokeruserfieldmessage_));
      }
    }

    virtual ~QryBrokerUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerUserFieldMessage not support this function");
    }

    CThostFtdcQryBrokerUserField qrybrokeruserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerUserFieldMessage const& aQryBrokerUserFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerUserFieldMessage ##" <<std::endl;
    os <<aQryBrokerUserFieldMessage.qrybrokeruserfieldmessage_; 
    os <<"## end QryBrokerUserFieldMessage ##" <<std::endl;
}

class QryBrokerUserFunctionFieldMessage : public FieldMessage
{
  public:
    QryBrokerUserFunctionFieldMessage(const CThostFtdcQryBrokerUserFunctionField* qrybrokeruserfunctionfieldmessage):
      type_(QRYBROKERUSERFUNCTIONFIELDMESSAGE)
    {
      memset(&qrybrokeruserfunctionfieldmessage_, 0x0, sizeof(qrybrokeruserfunctionfieldmessage_));

      if( qrybrokeruserfunctionfieldmessage )
      {
        memcpy(&qrybrokeruserfunctionfieldmessage_, qrybrokeruserfunctionfieldmessage, sizeof(qrybrokeruserfunctionfieldmessage_));
      }
    }

    virtual ~QryBrokerUserFunctionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerUserFunctionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerUserFunctionFieldMessage not support this function");
    }

    CThostFtdcQryBrokerUserFunctionField qrybrokeruserfunctionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerUserFunctionFieldMessage const& aQryBrokerUserFunctionFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerUserFunctionFieldMessage ##" <<std::endl;
    os <<aQryBrokerUserFunctionFieldMessage.qrybrokeruserfunctionfieldmessage_; 
    os <<"## end QryBrokerUserFunctionFieldMessage ##" <<std::endl;
}

class QryTraderOfferFieldMessage : public FieldMessage
{
  public:
    QryTraderOfferFieldMessage(const CThostFtdcQryTraderOfferField* qrytraderofferfieldmessage):
      type_(QRYTRADEROFFERFIELDMESSAGE)
    {
      memset(&qrytraderofferfieldmessage_, 0x0, sizeof(qrytraderofferfieldmessage_));

      if( qrytraderofferfieldmessage )
      {
        memcpy(&qrytraderofferfieldmessage_, qrytraderofferfieldmessage, sizeof(qrytraderofferfieldmessage_));
      }
    }

    virtual ~QryTraderOfferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTraderOfferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTraderOfferFieldMessage not support this function");
    }

    CThostFtdcQryTraderOfferField qrytraderofferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTraderOfferFieldMessage const& aQryTraderOfferFieldMessage)
{
    os <<std::endl;
    os <<"## QryTraderOfferFieldMessage ##" <<std::endl;
    os <<aQryTraderOfferFieldMessage.qrytraderofferfieldmessage_; 
    os <<"## end QryTraderOfferFieldMessage ##" <<std::endl;
}

class QrySyncDepositFieldMessage : public FieldMessage
{
  public:
    QrySyncDepositFieldMessage(const CThostFtdcQrySyncDepositField* qrysyncdepositfieldmessage):
      type_(QRYSYNCDEPOSITFIELDMESSAGE)
    {
      memset(&qrysyncdepositfieldmessage_, 0x0, sizeof(qrysyncdepositfieldmessage_));

      if( qrysyncdepositfieldmessage )
      {
        memcpy(&qrysyncdepositfieldmessage_, qrysyncdepositfieldmessage, sizeof(qrysyncdepositfieldmessage_));
      }
    }

    virtual ~QrySyncDepositFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySyncDepositFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySyncDepositFieldMessage not support this function");
    }

    CThostFtdcQrySyncDepositField qrysyncdepositfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySyncDepositFieldMessage const& aQrySyncDepositFieldMessage)
{
    os <<std::endl;
    os <<"## QrySyncDepositFieldMessage ##" <<std::endl;
    os <<aQrySyncDepositFieldMessage.qrysyncdepositfieldmessage_; 
    os <<"## end QrySyncDepositFieldMessage ##" <<std::endl;
}

class QrySettlementInfoFieldMessage : public FieldMessage
{
  public:
    QrySettlementInfoFieldMessage(const CThostFtdcQrySettlementInfoField* qrysettlementinfofieldmessage):
      type_(QRYSETTLEMENTINFOFIELDMESSAGE)
    {
      memset(&qrysettlementinfofieldmessage_, 0x0, sizeof(qrysettlementinfofieldmessage_));

      if( qrysettlementinfofieldmessage )
      {
        memcpy(&qrysettlementinfofieldmessage_, qrysettlementinfofieldmessage, sizeof(qrysettlementinfofieldmessage_));
      }
    }

    virtual ~QrySettlementInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySettlementInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySettlementInfoFieldMessage not support this function");
    }

    CThostFtdcQrySettlementInfoField qrysettlementinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySettlementInfoFieldMessage const& aQrySettlementInfoFieldMessage)
{
    os <<std::endl;
    os <<"## QrySettlementInfoFieldMessage ##" <<std::endl;
    os <<aQrySettlementInfoFieldMessage.qrysettlementinfofieldmessage_; 
    os <<"## end QrySettlementInfoFieldMessage ##" <<std::endl;
}

class QryExchangeMarginRateFieldMessage : public FieldMessage
{
  public:
    QryExchangeMarginRateFieldMessage(const CThostFtdcQryExchangeMarginRateField* qryexchangemarginratefieldmessage):
      type_(QRYEXCHANGEMARGINRATEFIELDMESSAGE)
    {
      memset(&qryexchangemarginratefieldmessage_, 0x0, sizeof(qryexchangemarginratefieldmessage_));

      if( qryexchangemarginratefieldmessage )
      {
        memcpy(&qryexchangemarginratefieldmessage_, qryexchangemarginratefieldmessage, sizeof(qryexchangemarginratefieldmessage_));
      }
    }

    virtual ~QryExchangeMarginRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeMarginRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeMarginRateFieldMessage not support this function");
    }

    CThostFtdcQryExchangeMarginRateField qryexchangemarginratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeMarginRateFieldMessage const& aQryExchangeMarginRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeMarginRateFieldMessage ##" <<std::endl;
    os <<aQryExchangeMarginRateFieldMessage.qryexchangemarginratefieldmessage_; 
    os <<"## end QryExchangeMarginRateFieldMessage ##" <<std::endl;
}

class QryExchangeMarginRateAdjustFieldMessage : public FieldMessage
{
  public:
    QryExchangeMarginRateAdjustFieldMessage(const CThostFtdcQryExchangeMarginRateAdjustField* qryexchangemarginrateadjustfieldmessage):
      type_(QRYEXCHANGEMARGINRATEADJUSTFIELDMESSAGE)
    {
      memset(&qryexchangemarginrateadjustfieldmessage_, 0x0, sizeof(qryexchangemarginrateadjustfieldmessage_));

      if( qryexchangemarginrateadjustfieldmessage )
      {
        memcpy(&qryexchangemarginrateadjustfieldmessage_, qryexchangemarginrateadjustfieldmessage, sizeof(qryexchangemarginrateadjustfieldmessage_));
      }
    }

    virtual ~QryExchangeMarginRateAdjustFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeMarginRateAdjustFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeMarginRateAdjustFieldMessage not support this function");
    }

    CThostFtdcQryExchangeMarginRateAdjustField qryexchangemarginrateadjustfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeMarginRateAdjustFieldMessage const& aQryExchangeMarginRateAdjustFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeMarginRateAdjustFieldMessage ##" <<std::endl;
    os <<aQryExchangeMarginRateAdjustFieldMessage.qryexchangemarginrateadjustfieldmessage_; 
    os <<"## end QryExchangeMarginRateAdjustFieldMessage ##" <<std::endl;
}

class QryExchangeRateFieldMessage : public FieldMessage
{
  public:
    QryExchangeRateFieldMessage(const CThostFtdcQryExchangeRateField* qryexchangeratefieldmessage):
      type_(QRYEXCHANGERATEFIELDMESSAGE)
    {
      memset(&qryexchangeratefieldmessage_, 0x0, sizeof(qryexchangeratefieldmessage_));

      if( qryexchangeratefieldmessage )
      {
        memcpy(&qryexchangeratefieldmessage_, qryexchangeratefieldmessage, sizeof(qryexchangeratefieldmessage_));
      }
    }

    virtual ~QryExchangeRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeRateFieldMessage not support this function");
    }

    CThostFtdcQryExchangeRateField qryexchangeratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeRateFieldMessage const& aQryExchangeRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeRateFieldMessage ##" <<std::endl;
    os <<aQryExchangeRateFieldMessage.qryexchangeratefieldmessage_; 
    os <<"## end QryExchangeRateFieldMessage ##" <<std::endl;
}

class QrySyncFundMortgageFieldMessage : public FieldMessage
{
  public:
    QrySyncFundMortgageFieldMessage(const CThostFtdcQrySyncFundMortgageField* qrysyncfundmortgagefieldmessage):
      type_(QRYSYNCFUNDMORTGAGEFIELDMESSAGE)
    {
      memset(&qrysyncfundmortgagefieldmessage_, 0x0, sizeof(qrysyncfundmortgagefieldmessage_));

      if( qrysyncfundmortgagefieldmessage )
      {
        memcpy(&qrysyncfundmortgagefieldmessage_, qrysyncfundmortgagefieldmessage, sizeof(qrysyncfundmortgagefieldmessage_));
      }
    }

    virtual ~QrySyncFundMortgageFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySyncFundMortgageFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySyncFundMortgageFieldMessage not support this function");
    }

    CThostFtdcQrySyncFundMortgageField qrysyncfundmortgagefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySyncFundMortgageFieldMessage const& aQrySyncFundMortgageFieldMessage)
{
    os <<std::endl;
    os <<"## QrySyncFundMortgageFieldMessage ##" <<std::endl;
    os <<aQrySyncFundMortgageFieldMessage.qrysyncfundmortgagefieldmessage_; 
    os <<"## end QrySyncFundMortgageFieldMessage ##" <<std::endl;
}

class QryHisOrderFieldMessage : public FieldMessage
{
  public:
    QryHisOrderFieldMessage(const CThostFtdcQryHisOrderField* qryhisorderfieldmessage):
      type_(QRYHISORDERFIELDMESSAGE)
    {
      memset(&qryhisorderfieldmessage_, 0x0, sizeof(qryhisorderfieldmessage_));

      if( qryhisorderfieldmessage )
      {
        memcpy(&qryhisorderfieldmessage_, qryhisorderfieldmessage, sizeof(qryhisorderfieldmessage_));
      }
    }

    virtual ~QryHisOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryHisOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryHisOrderFieldMessage not support this function");
    }

    CThostFtdcQryHisOrderField qryhisorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryHisOrderFieldMessage const& aQryHisOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryHisOrderFieldMessage ##" <<std::endl;
    os <<aQryHisOrderFieldMessage.qryhisorderfieldmessage_; 
    os <<"## end QryHisOrderFieldMessage ##" <<std::endl;
}

class OptionInstrMiniMarginFieldMessage : public FieldMessage
{
  public:
    OptionInstrMiniMarginFieldMessage(const CThostFtdcOptionInstrMiniMarginField* optioninstrminimarginfieldmessage):
      type_(OPTIONINSTRMINIMARGINFIELDMESSAGE)
    {
      memset(&optioninstrminimarginfieldmessage_, 0x0, sizeof(optioninstrminimarginfieldmessage_));

      if( optioninstrminimarginfieldmessage )
      {
        memcpy(&optioninstrminimarginfieldmessage_, optioninstrminimarginfieldmessage, sizeof(optioninstrminimarginfieldmessage_));
      }
    }

    virtual ~OptionInstrMiniMarginFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrMiniMarginFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrMiniMarginFieldMessage not support this function");
    }

    CThostFtdcOptionInstrMiniMarginField optioninstrminimarginfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrMiniMarginFieldMessage const& aOptionInstrMiniMarginFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrMiniMarginFieldMessage ##" <<std::endl;
    os <<aOptionInstrMiniMarginFieldMessage.optioninstrminimarginfieldmessage_; 
    os <<"## end OptionInstrMiniMarginFieldMessage ##" <<std::endl;
}

class OptionInstrMarginAdjustFieldMessage : public FieldMessage
{
  public:
    OptionInstrMarginAdjustFieldMessage(const CThostFtdcOptionInstrMarginAdjustField* optioninstrmarginadjustfieldmessage):
      type_(OPTIONINSTRMARGINADJUSTFIELDMESSAGE)
    {
      memset(&optioninstrmarginadjustfieldmessage_, 0x0, sizeof(optioninstrmarginadjustfieldmessage_));

      if( optioninstrmarginadjustfieldmessage )
      {
        memcpy(&optioninstrmarginadjustfieldmessage_, optioninstrmarginadjustfieldmessage, sizeof(optioninstrmarginadjustfieldmessage_));
      }
    }

    virtual ~OptionInstrMarginAdjustFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrMarginAdjustFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrMarginAdjustFieldMessage not support this function");
    }

    CThostFtdcOptionInstrMarginAdjustField optioninstrmarginadjustfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrMarginAdjustFieldMessage const& aOptionInstrMarginAdjustFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrMarginAdjustFieldMessage ##" <<std::endl;
    os <<aOptionInstrMarginAdjustFieldMessage.optioninstrmarginadjustfieldmessage_; 
    os <<"## end OptionInstrMarginAdjustFieldMessage ##" <<std::endl;
}

class OptionInstrCommRateFieldMessage : public FieldMessage
{
  public:
    OptionInstrCommRateFieldMessage(const CThostFtdcOptionInstrCommRateField* optioninstrcommratefieldmessage):
      type_(OPTIONINSTRCOMMRATEFIELDMESSAGE)
    {
      memset(&optioninstrcommratefieldmessage_, 0x0, sizeof(optioninstrcommratefieldmessage_));

      if( optioninstrcommratefieldmessage )
      {
        memcpy(&optioninstrcommratefieldmessage_, optioninstrcommratefieldmessage, sizeof(optioninstrcommratefieldmessage_));
      }
    }

    virtual ~OptionInstrCommRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrCommRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrCommRateFieldMessage not support this function");
    }

    CThostFtdcOptionInstrCommRateField optioninstrcommratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrCommRateFieldMessage const& aOptionInstrCommRateFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrCommRateFieldMessage ##" <<std::endl;
    os <<aOptionInstrCommRateFieldMessage.optioninstrcommratefieldmessage_; 
    os <<"## end OptionInstrCommRateFieldMessage ##" <<std::endl;
}

class OptionInstrTradeCostFieldMessage : public FieldMessage
{
  public:
    OptionInstrTradeCostFieldMessage(const CThostFtdcOptionInstrTradeCostField* optioninstrtradecostfieldmessage):
      type_(OPTIONINSTRTRADECOSTFIELDMESSAGE)
    {
      memset(&optioninstrtradecostfieldmessage_, 0x0, sizeof(optioninstrtradecostfieldmessage_));

      if( optioninstrtradecostfieldmessage )
      {
        memcpy(&optioninstrtradecostfieldmessage_, optioninstrtradecostfieldmessage, sizeof(optioninstrtradecostfieldmessage_));
      }
    }

    virtual ~OptionInstrTradeCostFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrTradeCostFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrTradeCostFieldMessage not support this function");
    }

    CThostFtdcOptionInstrTradeCostField optioninstrtradecostfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrTradeCostFieldMessage const& aOptionInstrTradeCostFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrTradeCostFieldMessage ##" <<std::endl;
    os <<aOptionInstrTradeCostFieldMessage.optioninstrtradecostfieldmessage_; 
    os <<"## end OptionInstrTradeCostFieldMessage ##" <<std::endl;
}

class QryOptionInstrTradeCostFieldMessage : public FieldMessage
{
  public:
    QryOptionInstrTradeCostFieldMessage(const CThostFtdcQryOptionInstrTradeCostField* qryoptioninstrtradecostfieldmessage):
      type_(QRYOPTIONINSTRTRADECOSTFIELDMESSAGE)
    {
      memset(&qryoptioninstrtradecostfieldmessage_, 0x0, sizeof(qryoptioninstrtradecostfieldmessage_));

      if( qryoptioninstrtradecostfieldmessage )
      {
        memcpy(&qryoptioninstrtradecostfieldmessage_, qryoptioninstrtradecostfieldmessage, sizeof(qryoptioninstrtradecostfieldmessage_));
      }
    }

    virtual ~QryOptionInstrTradeCostFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryOptionInstrTradeCostFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryOptionInstrTradeCostFieldMessage not support this function");
    }

    CThostFtdcQryOptionInstrTradeCostField qryoptioninstrtradecostfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryOptionInstrTradeCostFieldMessage const& aQryOptionInstrTradeCostFieldMessage)
{
    os <<std::endl;
    os <<"## QryOptionInstrTradeCostFieldMessage ##" <<std::endl;
    os <<aQryOptionInstrTradeCostFieldMessage.qryoptioninstrtradecostfieldmessage_; 
    os <<"## end QryOptionInstrTradeCostFieldMessage ##" <<std::endl;
}

class QryOptionInstrCommRateFieldMessage : public FieldMessage
{
  public:
    QryOptionInstrCommRateFieldMessage(const CThostFtdcQryOptionInstrCommRateField* qryoptioninstrcommratefieldmessage):
      type_(QRYOPTIONINSTRCOMMRATEFIELDMESSAGE)
    {
      memset(&qryoptioninstrcommratefieldmessage_, 0x0, sizeof(qryoptioninstrcommratefieldmessage_));

      if( qryoptioninstrcommratefieldmessage )
      {
        memcpy(&qryoptioninstrcommratefieldmessage_, qryoptioninstrcommratefieldmessage, sizeof(qryoptioninstrcommratefieldmessage_));
      }
    }

    virtual ~QryOptionInstrCommRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryOptionInstrCommRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryOptionInstrCommRateFieldMessage not support this function");
    }

    CThostFtdcQryOptionInstrCommRateField qryoptioninstrcommratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryOptionInstrCommRateFieldMessage const& aQryOptionInstrCommRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryOptionInstrCommRateFieldMessage ##" <<std::endl;
    os <<aQryOptionInstrCommRateFieldMessage.qryoptioninstrcommratefieldmessage_; 
    os <<"## end QryOptionInstrCommRateFieldMessage ##" <<std::endl;
}

class IndexPriceFieldMessage : public FieldMessage
{
  public:
    IndexPriceFieldMessage(const CThostFtdcIndexPriceField* indexpricefieldmessage):
      type_(INDEXPRICEFIELDMESSAGE)
    {
      memset(&indexpricefieldmessage_, 0x0, sizeof(indexpricefieldmessage_));

      if( indexpricefieldmessage )
      {
        memcpy(&indexpricefieldmessage_, indexpricefieldmessage, sizeof(indexpricefieldmessage_));
      }
    }

    virtual ~IndexPriceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type IndexPriceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type IndexPriceFieldMessage not support this function");
    }

    CThostFtdcIndexPriceField indexpricefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, IndexPriceFieldMessage const& aIndexPriceFieldMessage)
{
    os <<std::endl;
    os <<"## IndexPriceFieldMessage ##" <<std::endl;
    os <<aIndexPriceFieldMessage.indexpricefieldmessage_; 
    os <<"## end IndexPriceFieldMessage ##" <<std::endl;
}

class InputExecOrderFieldMessage : public FieldMessage
{
  public:
    InputExecOrderFieldMessage(const CThostFtdcInputExecOrderField* inputexecorderfieldmessage):
      type_(INPUTEXECORDERFIELDMESSAGE)
    {
      memset(&inputexecorderfieldmessage_, 0x0, sizeof(inputexecorderfieldmessage_));

      if( inputexecorderfieldmessage )
      {
        memcpy(&inputexecorderfieldmessage_, inputexecorderfieldmessage, sizeof(inputexecorderfieldmessage_));
      }
    }

    virtual ~InputExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputExecOrderFieldMessage not support this function");
    }

    CThostFtdcInputExecOrderField inputexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputExecOrderFieldMessage const& aInputExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## InputExecOrderFieldMessage ##" <<std::endl;
    os <<aInputExecOrderFieldMessage.inputexecorderfieldmessage_; 
    os <<"## end InputExecOrderFieldMessage ##" <<std::endl;
}

class InputExecOrderActionFieldMessage : public FieldMessage
{
  public:
    InputExecOrderActionFieldMessage(const CThostFtdcInputExecOrderActionField* inputexecorderactionfieldmessage):
      type_(INPUTEXECORDERACTIONFIELDMESSAGE)
    {
      memset(&inputexecorderactionfieldmessage_, 0x0, sizeof(inputexecorderactionfieldmessage_));

      if( inputexecorderactionfieldmessage )
      {
        memcpy(&inputexecorderactionfieldmessage_, inputexecorderactionfieldmessage, sizeof(inputexecorderactionfieldmessage_));
      }
    }

    virtual ~InputExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcInputExecOrderActionField inputexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputExecOrderActionFieldMessage const& aInputExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## InputExecOrderActionFieldMessage ##" <<std::endl;
    os <<aInputExecOrderActionFieldMessage.inputexecorderactionfieldmessage_; 
    os <<"## end InputExecOrderActionFieldMessage ##" <<std::endl;
}

class ExecOrderFieldMessage : public FieldMessage
{
  public:
    ExecOrderFieldMessage(const CThostFtdcExecOrderField* execorderfieldmessage):
      type_(EXECORDERFIELDMESSAGE)
    {
      memset(&execorderfieldmessage_, 0x0, sizeof(execorderfieldmessage_));

      if( execorderfieldmessage )
      {
        memcpy(&execorderfieldmessage_, execorderfieldmessage, sizeof(execorderfieldmessage_));
      }
    }

    virtual ~ExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExecOrderFieldMessage not support this function");
    }

    CThostFtdcExecOrderField execorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExecOrderFieldMessage const& aExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ExecOrderFieldMessage ##" <<std::endl;
    os <<aExecOrderFieldMessage.execorderfieldmessage_; 
    os <<"## end ExecOrderFieldMessage ##" <<std::endl;
}

class ExecOrderActionFieldMessage : public FieldMessage
{
  public:
    ExecOrderActionFieldMessage(const CThostFtdcExecOrderActionField* execorderactionfieldmessage):
      type_(EXECORDERACTIONFIELDMESSAGE)
    {
      memset(&execorderactionfieldmessage_, 0x0, sizeof(execorderactionfieldmessage_));

      if( execorderactionfieldmessage )
      {
        memcpy(&execorderactionfieldmessage_, execorderactionfieldmessage, sizeof(execorderactionfieldmessage_));
      }
    }

    virtual ~ExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcExecOrderActionField execorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExecOrderActionFieldMessage const& aExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ExecOrderActionFieldMessage ##" <<std::endl;
    os <<aExecOrderActionFieldMessage.execorderactionfieldmessage_; 
    os <<"## end ExecOrderActionFieldMessage ##" <<std::endl;
}

class QryExecOrderFieldMessage : public FieldMessage
{
  public:
    QryExecOrderFieldMessage(const CThostFtdcQryExecOrderField* qryexecorderfieldmessage):
      type_(QRYEXECORDERFIELDMESSAGE)
    {
      memset(&qryexecorderfieldmessage_, 0x0, sizeof(qryexecorderfieldmessage_));

      if( qryexecorderfieldmessage )
      {
        memcpy(&qryexecorderfieldmessage_, qryexecorderfieldmessage, sizeof(qryexecorderfieldmessage_));
      }
    }

    virtual ~QryExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExecOrderFieldMessage not support this function");
    }

    CThostFtdcQryExecOrderField qryexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExecOrderFieldMessage const& aQryExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryExecOrderFieldMessage ##" <<std::endl;
    os <<aQryExecOrderFieldMessage.qryexecorderfieldmessage_; 
    os <<"## end QryExecOrderFieldMessage ##" <<std::endl;
}

class ExchangeExecOrderFieldMessage : public FieldMessage
{
  public:
    ExchangeExecOrderFieldMessage(const CThostFtdcExchangeExecOrderField* exchangeexecorderfieldmessage):
      type_(EXCHANGEEXECORDERFIELDMESSAGE)
    {
      memset(&exchangeexecorderfieldmessage_, 0x0, sizeof(exchangeexecorderfieldmessage_));

      if( exchangeexecorderfieldmessage )
      {
        memcpy(&exchangeexecorderfieldmessage_, exchangeexecorderfieldmessage, sizeof(exchangeexecorderfieldmessage_));
      }
    }

    virtual ~ExchangeExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeExecOrderFieldMessage not support this function");
    }

    CThostFtdcExchangeExecOrderField exchangeexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeExecOrderFieldMessage const& aExchangeExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeExecOrderFieldMessage ##" <<std::endl;
    os <<aExchangeExecOrderFieldMessage.exchangeexecorderfieldmessage_; 
    os <<"## end ExchangeExecOrderFieldMessage ##" <<std::endl;
}

class QryExchangeExecOrderFieldMessage : public FieldMessage
{
  public:
    QryExchangeExecOrderFieldMessage(const CThostFtdcQryExchangeExecOrderField* qryexchangeexecorderfieldmessage):
      type_(QRYEXCHANGEEXECORDERFIELDMESSAGE)
    {
      memset(&qryexchangeexecorderfieldmessage_, 0x0, sizeof(qryexchangeexecorderfieldmessage_));

      if( qryexchangeexecorderfieldmessage )
      {
        memcpy(&qryexchangeexecorderfieldmessage_, qryexchangeexecorderfieldmessage, sizeof(qryexchangeexecorderfieldmessage_));
      }
    }

    virtual ~QryExchangeExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeExecOrderFieldMessage not support this function");
    }

    CThostFtdcQryExchangeExecOrderField qryexchangeexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeExecOrderFieldMessage const& aQryExchangeExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeExecOrderFieldMessage ##" <<std::endl;
    os <<aQryExchangeExecOrderFieldMessage.qryexchangeexecorderfieldmessage_; 
    os <<"## end QryExchangeExecOrderFieldMessage ##" <<std::endl;
}

class QryExecOrderActionFieldMessage : public FieldMessage
{
  public:
    QryExecOrderActionFieldMessage(const CThostFtdcQryExecOrderActionField* qryexecorderactionfieldmessage):
      type_(QRYEXECORDERACTIONFIELDMESSAGE)
    {
      memset(&qryexecorderactionfieldmessage_, 0x0, sizeof(qryexecorderactionfieldmessage_));

      if( qryexecorderactionfieldmessage )
      {
        memcpy(&qryexecorderactionfieldmessage_, qryexecorderactionfieldmessage, sizeof(qryexecorderactionfieldmessage_));
      }
    }

    virtual ~QryExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryExecOrderActionField qryexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExecOrderActionFieldMessage const& aQryExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryExecOrderActionFieldMessage ##" <<std::endl;
    os <<aQryExecOrderActionFieldMessage.qryexecorderactionfieldmessage_; 
    os <<"## end QryExecOrderActionFieldMessage ##" <<std::endl;
}

class ExchangeExecOrderActionFieldMessage : public FieldMessage
{
  public:
    ExchangeExecOrderActionFieldMessage(const CThostFtdcExchangeExecOrderActionField* exchangeexecorderactionfieldmessage):
      type_(EXCHANGEEXECORDERACTIONFIELDMESSAGE)
    {
      memset(&exchangeexecorderactionfieldmessage_, 0x0, sizeof(exchangeexecorderactionfieldmessage_));

      if( exchangeexecorderactionfieldmessage )
      {
        memcpy(&exchangeexecorderactionfieldmessage_, exchangeexecorderactionfieldmessage, sizeof(exchangeexecorderactionfieldmessage_));
      }
    }

    virtual ~ExchangeExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcExchangeExecOrderActionField exchangeexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeExecOrderActionFieldMessage const& aExchangeExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeExecOrderActionFieldMessage ##" <<std::endl;
    os <<aExchangeExecOrderActionFieldMessage.exchangeexecorderactionfieldmessage_; 
    os <<"## end ExchangeExecOrderActionFieldMessage ##" <<std::endl;
}

class QryExchangeExecOrderActionFieldMessage : public FieldMessage
{
  public:
    QryExchangeExecOrderActionFieldMessage(const CThostFtdcQryExchangeExecOrderActionField* qryexchangeexecorderactionfieldmessage):
      type_(QRYEXCHANGEEXECORDERACTIONFIELDMESSAGE)
    {
      memset(&qryexchangeexecorderactionfieldmessage_, 0x0, sizeof(qryexchangeexecorderactionfieldmessage_));

      if( qryexchangeexecorderactionfieldmessage )
      {
        memcpy(&qryexchangeexecorderactionfieldmessage_, qryexchangeexecorderactionfieldmessage, sizeof(qryexchangeexecorderactionfieldmessage_));
      }
    }

    virtual ~QryExchangeExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryExchangeExecOrderActionField qryexchangeexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeExecOrderActionFieldMessage const& aQryExchangeExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeExecOrderActionFieldMessage ##" <<std::endl;
    os <<aQryExchangeExecOrderActionFieldMessage.qryexchangeexecorderactionfieldmessage_; 
    os <<"## end QryExchangeExecOrderActionFieldMessage ##" <<std::endl;
}

class ErrExecOrderFieldMessage : public FieldMessage
{
  public:
    ErrExecOrderFieldMessage(const CThostFtdcErrExecOrderField* errexecorderfieldmessage):
      type_(ERREXECORDERFIELDMESSAGE)
    {
      memset(&errexecorderfieldmessage_, 0x0, sizeof(errexecorderfieldmessage_));

      if( errexecorderfieldmessage )
      {
        memcpy(&errexecorderfieldmessage_, errexecorderfieldmessage, sizeof(errexecorderfieldmessage_));
      }
    }

    virtual ~ErrExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ErrExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ErrExecOrderFieldMessage not support this function");
    }

    CThostFtdcErrExecOrderField errexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ErrExecOrderFieldMessage const& aErrExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ErrExecOrderFieldMessage ##" <<std::endl;
    os <<aErrExecOrderFieldMessage.errexecorderfieldmessage_; 
    os <<"## end ErrExecOrderFieldMessage ##" <<std::endl;
}

class QryErrExecOrderFieldMessage : public FieldMessage
{
  public:
    QryErrExecOrderFieldMessage(const CThostFtdcQryErrExecOrderField* qryerrexecorderfieldmessage):
      type_(QRYERREXECORDERFIELDMESSAGE)
    {
      memset(&qryerrexecorderfieldmessage_, 0x0, sizeof(qryerrexecorderfieldmessage_));

      if( qryerrexecorderfieldmessage )
      {
        memcpy(&qryerrexecorderfieldmessage_, qryerrexecorderfieldmessage, sizeof(qryerrexecorderfieldmessage_));
      }
    }

    virtual ~QryErrExecOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryErrExecOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryErrExecOrderFieldMessage not support this function");
    }

    CThostFtdcQryErrExecOrderField qryerrexecorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryErrExecOrderFieldMessage const& aQryErrExecOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryErrExecOrderFieldMessage ##" <<std::endl;
    os <<aQryErrExecOrderFieldMessage.qryerrexecorderfieldmessage_; 
    os <<"## end QryErrExecOrderFieldMessage ##" <<std::endl;
}

class ErrExecOrderActionFieldMessage : public FieldMessage
{
  public:
    ErrExecOrderActionFieldMessage(const CThostFtdcErrExecOrderActionField* errexecorderactionfieldmessage):
      type_(ERREXECORDERACTIONFIELDMESSAGE)
    {
      memset(&errexecorderactionfieldmessage_, 0x0, sizeof(errexecorderactionfieldmessage_));

      if( errexecorderactionfieldmessage )
      {
        memcpy(&errexecorderactionfieldmessage_, errexecorderactionfieldmessage, sizeof(errexecorderactionfieldmessage_));
      }
    }

    virtual ~ErrExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ErrExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ErrExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcErrExecOrderActionField errexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ErrExecOrderActionFieldMessage const& aErrExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ErrExecOrderActionFieldMessage ##" <<std::endl;
    os <<aErrExecOrderActionFieldMessage.errexecorderactionfieldmessage_; 
    os <<"## end ErrExecOrderActionFieldMessage ##" <<std::endl;
}

class QryErrExecOrderActionFieldMessage : public FieldMessage
{
  public:
    QryErrExecOrderActionFieldMessage(const CThostFtdcQryErrExecOrderActionField* qryerrexecorderactionfieldmessage):
      type_(QRYERREXECORDERACTIONFIELDMESSAGE)
    {
      memset(&qryerrexecorderactionfieldmessage_, 0x0, sizeof(qryerrexecorderactionfieldmessage_));

      if( qryerrexecorderactionfieldmessage )
      {
        memcpy(&qryerrexecorderactionfieldmessage_, qryerrexecorderactionfieldmessage, sizeof(qryerrexecorderactionfieldmessage_));
      }
    }

    virtual ~QryErrExecOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryErrExecOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryErrExecOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryErrExecOrderActionField qryerrexecorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryErrExecOrderActionFieldMessage const& aQryErrExecOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryErrExecOrderActionFieldMessage ##" <<std::endl;
    os <<aQryErrExecOrderActionFieldMessage.qryerrexecorderactionfieldmessage_; 
    os <<"## end QryErrExecOrderActionFieldMessage ##" <<std::endl;
}

class OptionInstrTradingRightFieldMessage : public FieldMessage
{
  public:
    OptionInstrTradingRightFieldMessage(const CThostFtdcOptionInstrTradingRightField* optioninstrtradingrightfieldmessage):
      type_(OPTIONINSTRTRADINGRIGHTFIELDMESSAGE)
    {
      memset(&optioninstrtradingrightfieldmessage_, 0x0, sizeof(optioninstrtradingrightfieldmessage_));

      if( optioninstrtradingrightfieldmessage )
      {
        memcpy(&optioninstrtradingrightfieldmessage_, optioninstrtradingrightfieldmessage, sizeof(optioninstrtradingrightfieldmessage_));
      }
    }

    virtual ~OptionInstrTradingRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrTradingRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrTradingRightFieldMessage not support this function");
    }

    CThostFtdcOptionInstrTradingRightField optioninstrtradingrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrTradingRightFieldMessage const& aOptionInstrTradingRightFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrTradingRightFieldMessage ##" <<std::endl;
    os <<aOptionInstrTradingRightFieldMessage.optioninstrtradingrightfieldmessage_; 
    os <<"## end OptionInstrTradingRightFieldMessage ##" <<std::endl;
}

class QryOptionInstrTradingRightFieldMessage : public FieldMessage
{
  public:
    QryOptionInstrTradingRightFieldMessage(const CThostFtdcQryOptionInstrTradingRightField* qryoptioninstrtradingrightfieldmessage):
      type_(QRYOPTIONINSTRTRADINGRIGHTFIELDMESSAGE)
    {
      memset(&qryoptioninstrtradingrightfieldmessage_, 0x0, sizeof(qryoptioninstrtradingrightfieldmessage_));

      if( qryoptioninstrtradingrightfieldmessage )
      {
        memcpy(&qryoptioninstrtradingrightfieldmessage_, qryoptioninstrtradingrightfieldmessage, sizeof(qryoptioninstrtradingrightfieldmessage_));
      }
    }

    virtual ~QryOptionInstrTradingRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryOptionInstrTradingRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryOptionInstrTradingRightFieldMessage not support this function");
    }

    CThostFtdcQryOptionInstrTradingRightField qryoptioninstrtradingrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryOptionInstrTradingRightFieldMessage const& aQryOptionInstrTradingRightFieldMessage)
{
    os <<std::endl;
    os <<"## QryOptionInstrTradingRightFieldMessage ##" <<std::endl;
    os <<aQryOptionInstrTradingRightFieldMessage.qryoptioninstrtradingrightfieldmessage_; 
    os <<"## end QryOptionInstrTradingRightFieldMessage ##" <<std::endl;
}

class InputForQuoteFieldMessage : public FieldMessage
{
  public:
    InputForQuoteFieldMessage(const CThostFtdcInputForQuoteField* inputforquotefieldmessage):
      type_(INPUTFORQUOTEFIELDMESSAGE)
    {
      memset(&inputforquotefieldmessage_, 0x0, sizeof(inputforquotefieldmessage_));

      if( inputforquotefieldmessage )
      {
        memcpy(&inputforquotefieldmessage_, inputforquotefieldmessage, sizeof(inputforquotefieldmessage_));
      }
    }

    virtual ~InputForQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputForQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputForQuoteFieldMessage not support this function");
    }

    CThostFtdcInputForQuoteField inputforquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputForQuoteFieldMessage const& aInputForQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## InputForQuoteFieldMessage ##" <<std::endl;
    os <<aInputForQuoteFieldMessage.inputforquotefieldmessage_; 
    os <<"## end InputForQuoteFieldMessage ##" <<std::endl;
}

class ForQuoteFieldMessage : public FieldMessage
{
  public:
    ForQuoteFieldMessage(const CThostFtdcForQuoteField* forquotefieldmessage):
      type_(FORQUOTEFIELDMESSAGE)
    {
      memset(&forquotefieldmessage_, 0x0, sizeof(forquotefieldmessage_));

      if( forquotefieldmessage )
      {
        memcpy(&forquotefieldmessage_, forquotefieldmessage, sizeof(forquotefieldmessage_));
      }
    }

    virtual ~ForQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ForQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ForQuoteFieldMessage not support this function");
    }

    CThostFtdcForQuoteField forquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ForQuoteFieldMessage const& aForQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## ForQuoteFieldMessage ##" <<std::endl;
    os <<aForQuoteFieldMessage.forquotefieldmessage_; 
    os <<"## end ForQuoteFieldMessage ##" <<std::endl;
}

class QryForQuoteFieldMessage : public FieldMessage
{
  public:
    QryForQuoteFieldMessage(const CThostFtdcQryForQuoteField* qryforquotefieldmessage):
      type_(QRYFORQUOTEFIELDMESSAGE)
    {
      memset(&qryforquotefieldmessage_, 0x0, sizeof(qryforquotefieldmessage_));

      if( qryforquotefieldmessage )
      {
        memcpy(&qryforquotefieldmessage_, qryforquotefieldmessage, sizeof(qryforquotefieldmessage_));
      }
    }

    virtual ~QryForQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryForQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryForQuoteFieldMessage not support this function");
    }

    CThostFtdcQryForQuoteField qryforquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryForQuoteFieldMessage const& aQryForQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## QryForQuoteFieldMessage ##" <<std::endl;
    os <<aQryForQuoteFieldMessage.qryforquotefieldmessage_; 
    os <<"## end QryForQuoteFieldMessage ##" <<std::endl;
}

class ExchangeForQuoteFieldMessage : public FieldMessage
{
  public:
    ExchangeForQuoteFieldMessage(const CThostFtdcExchangeForQuoteField* exchangeforquotefieldmessage):
      type_(EXCHANGEFORQUOTEFIELDMESSAGE)
    {
      memset(&exchangeforquotefieldmessage_, 0x0, sizeof(exchangeforquotefieldmessage_));

      if( exchangeforquotefieldmessage )
      {
        memcpy(&exchangeforquotefieldmessage_, exchangeforquotefieldmessage, sizeof(exchangeforquotefieldmessage_));
      }
    }

    virtual ~ExchangeForQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeForQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeForQuoteFieldMessage not support this function");
    }

    CThostFtdcExchangeForQuoteField exchangeforquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeForQuoteFieldMessage const& aExchangeForQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeForQuoteFieldMessage ##" <<std::endl;
    os <<aExchangeForQuoteFieldMessage.exchangeforquotefieldmessage_; 
    os <<"## end ExchangeForQuoteFieldMessage ##" <<std::endl;
}

class QryExchangeForQuoteFieldMessage : public FieldMessage
{
  public:
    QryExchangeForQuoteFieldMessage(const CThostFtdcQryExchangeForQuoteField* qryexchangeforquotefieldmessage):
      type_(QRYEXCHANGEFORQUOTEFIELDMESSAGE)
    {
      memset(&qryexchangeforquotefieldmessage_, 0x0, sizeof(qryexchangeforquotefieldmessage_));

      if( qryexchangeforquotefieldmessage )
      {
        memcpy(&qryexchangeforquotefieldmessage_, qryexchangeforquotefieldmessage, sizeof(qryexchangeforquotefieldmessage_));
      }
    }

    virtual ~QryExchangeForQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeForQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeForQuoteFieldMessage not support this function");
    }

    CThostFtdcQryExchangeForQuoteField qryexchangeforquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeForQuoteFieldMessage const& aQryExchangeForQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeForQuoteFieldMessage ##" <<std::endl;
    os <<aQryExchangeForQuoteFieldMessage.qryexchangeforquotefieldmessage_; 
    os <<"## end QryExchangeForQuoteFieldMessage ##" <<std::endl;
}

class InputQuoteFieldMessage : public FieldMessage
{
  public:
    InputQuoteFieldMessage(const CThostFtdcInputQuoteField* inputquotefieldmessage):
      type_(INPUTQUOTEFIELDMESSAGE)
    {
      memset(&inputquotefieldmessage_, 0x0, sizeof(inputquotefieldmessage_));

      if( inputquotefieldmessage )
      {
        memcpy(&inputquotefieldmessage_, inputquotefieldmessage, sizeof(inputquotefieldmessage_));
      }
    }

    virtual ~InputQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputQuoteFieldMessage not support this function");
    }

    CThostFtdcInputQuoteField inputquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputQuoteFieldMessage const& aInputQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## InputQuoteFieldMessage ##" <<std::endl;
    os <<aInputQuoteFieldMessage.inputquotefieldmessage_; 
    os <<"## end InputQuoteFieldMessage ##" <<std::endl;
}

class InputQuoteActionFieldMessage : public FieldMessage
{
  public:
    InputQuoteActionFieldMessage(const CThostFtdcInputQuoteActionField* inputquoteactionfieldmessage):
      type_(INPUTQUOTEACTIONFIELDMESSAGE)
    {
      memset(&inputquoteactionfieldmessage_, 0x0, sizeof(inputquoteactionfieldmessage_));

      if( inputquoteactionfieldmessage )
      {
        memcpy(&inputquoteactionfieldmessage_, inputquoteactionfieldmessage, sizeof(inputquoteactionfieldmessage_));
      }
    }

    virtual ~InputQuoteActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputQuoteActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputQuoteActionFieldMessage not support this function");
    }

    CThostFtdcInputQuoteActionField inputquoteactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputQuoteActionFieldMessage const& aInputQuoteActionFieldMessage)
{
    os <<std::endl;
    os <<"## InputQuoteActionFieldMessage ##" <<std::endl;
    os <<aInputQuoteActionFieldMessage.inputquoteactionfieldmessage_; 
    os <<"## end InputQuoteActionFieldMessage ##" <<std::endl;
}

class QuoteFieldMessage : public FieldMessage
{
  public:
    QuoteFieldMessage(const CThostFtdcQuoteField* quotefieldmessage):
      type_(QUOTEFIELDMESSAGE)
    {
      memset(&quotefieldmessage_, 0x0, sizeof(quotefieldmessage_));

      if( quotefieldmessage )
      {
        memcpy(&quotefieldmessage_, quotefieldmessage, sizeof(quotefieldmessage_));
      }
    }

    virtual ~QuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QuoteFieldMessage not support this function");
    }

    CThostFtdcQuoteField quotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QuoteFieldMessage const& aQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## QuoteFieldMessage ##" <<std::endl;
    os <<aQuoteFieldMessage.quotefieldmessage_; 
    os <<"## end QuoteFieldMessage ##" <<std::endl;
}

class QuoteActionFieldMessage : public FieldMessage
{
  public:
    QuoteActionFieldMessage(const CThostFtdcQuoteActionField* quoteactionfieldmessage):
      type_(QUOTEACTIONFIELDMESSAGE)
    {
      memset(&quoteactionfieldmessage_, 0x0, sizeof(quoteactionfieldmessage_));

      if( quoteactionfieldmessage )
      {
        memcpy(&quoteactionfieldmessage_, quoteactionfieldmessage, sizeof(quoteactionfieldmessage_));
      }
    }

    virtual ~QuoteActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QuoteActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QuoteActionFieldMessage not support this function");
    }

    CThostFtdcQuoteActionField quoteactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QuoteActionFieldMessage const& aQuoteActionFieldMessage)
{
    os <<std::endl;
    os <<"## QuoteActionFieldMessage ##" <<std::endl;
    os <<aQuoteActionFieldMessage.quoteactionfieldmessage_; 
    os <<"## end QuoteActionFieldMessage ##" <<std::endl;
}

class QryQuoteFieldMessage : public FieldMessage
{
  public:
    QryQuoteFieldMessage(const CThostFtdcQryQuoteField* qryquotefieldmessage):
      type_(QRYQUOTEFIELDMESSAGE)
    {
      memset(&qryquotefieldmessage_, 0x0, sizeof(qryquotefieldmessage_));

      if( qryquotefieldmessage )
      {
        memcpy(&qryquotefieldmessage_, qryquotefieldmessage, sizeof(qryquotefieldmessage_));
      }
    }

    virtual ~QryQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryQuoteFieldMessage not support this function");
    }

    CThostFtdcQryQuoteField qryquotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryQuoteFieldMessage const& aQryQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## QryQuoteFieldMessage ##" <<std::endl;
    os <<aQryQuoteFieldMessage.qryquotefieldmessage_; 
    os <<"## end QryQuoteFieldMessage ##" <<std::endl;
}

class ExchangeQuoteFieldMessage : public FieldMessage
{
  public:
    ExchangeQuoteFieldMessage(const CThostFtdcExchangeQuoteField* exchangequotefieldmessage):
      type_(EXCHANGEQUOTEFIELDMESSAGE)
    {
      memset(&exchangequotefieldmessage_, 0x0, sizeof(exchangequotefieldmessage_));

      if( exchangequotefieldmessage )
      {
        memcpy(&exchangequotefieldmessage_, exchangequotefieldmessage, sizeof(exchangequotefieldmessage_));
      }
    }

    virtual ~ExchangeQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeQuoteFieldMessage not support this function");
    }

    CThostFtdcExchangeQuoteField exchangequotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeQuoteFieldMessage const& aExchangeQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeQuoteFieldMessage ##" <<std::endl;
    os <<aExchangeQuoteFieldMessage.exchangequotefieldmessage_; 
    os <<"## end ExchangeQuoteFieldMessage ##" <<std::endl;
}

class QryExchangeQuoteFieldMessage : public FieldMessage
{
  public:
    QryExchangeQuoteFieldMessage(const CThostFtdcQryExchangeQuoteField* qryexchangequotefieldmessage):
      type_(QRYEXCHANGEQUOTEFIELDMESSAGE)
    {
      memset(&qryexchangequotefieldmessage_, 0x0, sizeof(qryexchangequotefieldmessage_));

      if( qryexchangequotefieldmessage )
      {
        memcpy(&qryexchangequotefieldmessage_, qryexchangequotefieldmessage, sizeof(qryexchangequotefieldmessage_));
      }
    }

    virtual ~QryExchangeQuoteFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeQuoteFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeQuoteFieldMessage not support this function");
    }

    CThostFtdcQryExchangeQuoteField qryexchangequotefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeQuoteFieldMessage const& aQryExchangeQuoteFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeQuoteFieldMessage ##" <<std::endl;
    os <<aQryExchangeQuoteFieldMessage.qryexchangequotefieldmessage_; 
    os <<"## end QryExchangeQuoteFieldMessage ##" <<std::endl;
}

class QryQuoteActionFieldMessage : public FieldMessage
{
  public:
    QryQuoteActionFieldMessage(const CThostFtdcQryQuoteActionField* qryquoteactionfieldmessage):
      type_(QRYQUOTEACTIONFIELDMESSAGE)
    {
      memset(&qryquoteactionfieldmessage_, 0x0, sizeof(qryquoteactionfieldmessage_));

      if( qryquoteactionfieldmessage )
      {
        memcpy(&qryquoteactionfieldmessage_, qryquoteactionfieldmessage, sizeof(qryquoteactionfieldmessage_));
      }
    }

    virtual ~QryQuoteActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryQuoteActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryQuoteActionFieldMessage not support this function");
    }

    CThostFtdcQryQuoteActionField qryquoteactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryQuoteActionFieldMessage const& aQryQuoteActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryQuoteActionFieldMessage ##" <<std::endl;
    os <<aQryQuoteActionFieldMessage.qryquoteactionfieldmessage_; 
    os <<"## end QryQuoteActionFieldMessage ##" <<std::endl;
}

class ExchangeQuoteActionFieldMessage : public FieldMessage
{
  public:
    ExchangeQuoteActionFieldMessage(const CThostFtdcExchangeQuoteActionField* exchangequoteactionfieldmessage):
      type_(EXCHANGEQUOTEACTIONFIELDMESSAGE)
    {
      memset(&exchangequoteactionfieldmessage_, 0x0, sizeof(exchangequoteactionfieldmessage_));

      if( exchangequoteactionfieldmessage )
      {
        memcpy(&exchangequoteactionfieldmessage_, exchangequoteactionfieldmessage, sizeof(exchangequoteactionfieldmessage_));
      }
    }

    virtual ~ExchangeQuoteActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeQuoteActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeQuoteActionFieldMessage not support this function");
    }

    CThostFtdcExchangeQuoteActionField exchangequoteactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeQuoteActionFieldMessage const& aExchangeQuoteActionFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeQuoteActionFieldMessage ##" <<std::endl;
    os <<aExchangeQuoteActionFieldMessage.exchangequoteactionfieldmessage_; 
    os <<"## end ExchangeQuoteActionFieldMessage ##" <<std::endl;
}

class QryExchangeQuoteActionFieldMessage : public FieldMessage
{
  public:
    QryExchangeQuoteActionFieldMessage(const CThostFtdcQryExchangeQuoteActionField* qryexchangequoteactionfieldmessage):
      type_(QRYEXCHANGEQUOTEACTIONFIELDMESSAGE)
    {
      memset(&qryexchangequoteactionfieldmessage_, 0x0, sizeof(qryexchangequoteactionfieldmessage_));

      if( qryexchangequoteactionfieldmessage )
      {
        memcpy(&qryexchangequoteactionfieldmessage_, qryexchangequoteactionfieldmessage, sizeof(qryexchangequoteactionfieldmessage_));
      }
    }

    virtual ~QryExchangeQuoteActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeQuoteActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeQuoteActionFieldMessage not support this function");
    }

    CThostFtdcQryExchangeQuoteActionField qryexchangequoteactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeQuoteActionFieldMessage const& aQryExchangeQuoteActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeQuoteActionFieldMessage ##" <<std::endl;
    os <<aQryExchangeQuoteActionFieldMessage.qryexchangequoteactionfieldmessage_; 
    os <<"## end QryExchangeQuoteActionFieldMessage ##" <<std::endl;
}

class OptionInstrDeltaFieldMessage : public FieldMessage
{
  public:
    OptionInstrDeltaFieldMessage(const CThostFtdcOptionInstrDeltaField* optioninstrdeltafieldmessage):
      type_(OPTIONINSTRDELTAFIELDMESSAGE)
    {
      memset(&optioninstrdeltafieldmessage_, 0x0, sizeof(optioninstrdeltafieldmessage_));

      if( optioninstrdeltafieldmessage )
      {
        memcpy(&optioninstrdeltafieldmessage_, optioninstrdeltafieldmessage, sizeof(optioninstrdeltafieldmessage_));
      }
    }

    virtual ~OptionInstrDeltaFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OptionInstrDeltaFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OptionInstrDeltaFieldMessage not support this function");
    }

    CThostFtdcOptionInstrDeltaField optioninstrdeltafieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OptionInstrDeltaFieldMessage const& aOptionInstrDeltaFieldMessage)
{
    os <<std::endl;
    os <<"## OptionInstrDeltaFieldMessage ##" <<std::endl;
    os <<aOptionInstrDeltaFieldMessage.optioninstrdeltafieldmessage_; 
    os <<"## end OptionInstrDeltaFieldMessage ##" <<std::endl;
}

class ForQuoteRspFieldMessage : public FieldMessage
{
  public:
    ForQuoteRspFieldMessage(const CThostFtdcForQuoteRspField* forquoterspfieldmessage):
      type_(FORQUOTERSPFIELDMESSAGE)
    {
      memset(&forquoterspfieldmessage_, 0x0, sizeof(forquoterspfieldmessage_));

      if( forquoterspfieldmessage )
      {
        memcpy(&forquoterspfieldmessage_, forquoterspfieldmessage, sizeof(forquoterspfieldmessage_));
      }
    }

    virtual ~ForQuoteRspFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ForQuoteRspFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ForQuoteRspFieldMessage not support this function");
    }

    CThostFtdcForQuoteRspField forquoterspfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ForQuoteRspFieldMessage const& aForQuoteRspFieldMessage)
{
    os <<std::endl;
    os <<"## ForQuoteRspFieldMessage ##" <<std::endl;
    os <<aForQuoteRspFieldMessage.forquoterspfieldmessage_; 
    os <<"## end ForQuoteRspFieldMessage ##" <<std::endl;
}

class StrikeOffsetFieldMessage : public FieldMessage
{
  public:
    StrikeOffsetFieldMessage(const CThostFtdcStrikeOffsetField* strikeoffsetfieldmessage):
      type_(STRIKEOFFSETFIELDMESSAGE)
    {
      memset(&strikeoffsetfieldmessage_, 0x0, sizeof(strikeoffsetfieldmessage_));

      if( strikeoffsetfieldmessage )
      {
        memcpy(&strikeoffsetfieldmessage_, strikeoffsetfieldmessage, sizeof(strikeoffsetfieldmessage_));
      }
    }

    virtual ~StrikeOffsetFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type StrikeOffsetFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type StrikeOffsetFieldMessage not support this function");
    }

    CThostFtdcStrikeOffsetField strikeoffsetfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, StrikeOffsetFieldMessage const& aStrikeOffsetFieldMessage)
{
    os <<std::endl;
    os <<"## StrikeOffsetFieldMessage ##" <<std::endl;
    os <<aStrikeOffsetFieldMessage.strikeoffsetfieldmessage_; 
    os <<"## end StrikeOffsetFieldMessage ##" <<std::endl;
}

class QryStrikeOffsetFieldMessage : public FieldMessage
{
  public:
    QryStrikeOffsetFieldMessage(const CThostFtdcQryStrikeOffsetField* qrystrikeoffsetfieldmessage):
      type_(QRYSTRIKEOFFSETFIELDMESSAGE)
    {
      memset(&qrystrikeoffsetfieldmessage_, 0x0, sizeof(qrystrikeoffsetfieldmessage_));

      if( qrystrikeoffsetfieldmessage )
      {
        memcpy(&qrystrikeoffsetfieldmessage_, qrystrikeoffsetfieldmessage, sizeof(qrystrikeoffsetfieldmessage_));
      }
    }

    virtual ~QryStrikeOffsetFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryStrikeOffsetFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryStrikeOffsetFieldMessage not support this function");
    }

    CThostFtdcQryStrikeOffsetField qrystrikeoffsetfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryStrikeOffsetFieldMessage const& aQryStrikeOffsetFieldMessage)
{
    os <<std::endl;
    os <<"## QryStrikeOffsetFieldMessage ##" <<std::endl;
    os <<aQryStrikeOffsetFieldMessage.qrystrikeoffsetfieldmessage_; 
    os <<"## end QryStrikeOffsetFieldMessage ##" <<std::endl;
}

class CombInstrumentGuardFieldMessage : public FieldMessage
{
  public:
    CombInstrumentGuardFieldMessage(const CThostFtdcCombInstrumentGuardField* combinstrumentguardfieldmessage):
      type_(COMBINSTRUMENTGUARDFIELDMESSAGE)
    {
      memset(&combinstrumentguardfieldmessage_, 0x0, sizeof(combinstrumentguardfieldmessage_));

      if( combinstrumentguardfieldmessage )
      {
        memcpy(&combinstrumentguardfieldmessage_, combinstrumentguardfieldmessage, sizeof(combinstrumentguardfieldmessage_));
      }
    }

    virtual ~CombInstrumentGuardFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CombInstrumentGuardFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CombInstrumentGuardFieldMessage not support this function");
    }

    CThostFtdcCombInstrumentGuardField combinstrumentguardfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CombInstrumentGuardFieldMessage const& aCombInstrumentGuardFieldMessage)
{
    os <<std::endl;
    os <<"## CombInstrumentGuardFieldMessage ##" <<std::endl;
    os <<aCombInstrumentGuardFieldMessage.combinstrumentguardfieldmessage_; 
    os <<"## end CombInstrumentGuardFieldMessage ##" <<std::endl;
}

class QryCombInstrumentGuardFieldMessage : public FieldMessage
{
  public:
    QryCombInstrumentGuardFieldMessage(const CThostFtdcQryCombInstrumentGuardField* qrycombinstrumentguardfieldmessage):
      type_(QRYCOMBINSTRUMENTGUARDFIELDMESSAGE)
    {
      memset(&qrycombinstrumentguardfieldmessage_, 0x0, sizeof(qrycombinstrumentguardfieldmessage_));

      if( qrycombinstrumentguardfieldmessage )
      {
        memcpy(&qrycombinstrumentguardfieldmessage_, qrycombinstrumentguardfieldmessage, sizeof(qrycombinstrumentguardfieldmessage_));
      }
    }

    virtual ~QryCombInstrumentGuardFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCombInstrumentGuardFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCombInstrumentGuardFieldMessage not support this function");
    }

    CThostFtdcQryCombInstrumentGuardField qrycombinstrumentguardfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCombInstrumentGuardFieldMessage const& aQryCombInstrumentGuardFieldMessage)
{
    os <<std::endl;
    os <<"## QryCombInstrumentGuardFieldMessage ##" <<std::endl;
    os <<aQryCombInstrumentGuardFieldMessage.qrycombinstrumentguardfieldmessage_; 
    os <<"## end QryCombInstrumentGuardFieldMessage ##" <<std::endl;
}

class InputCombActionFieldMessage : public FieldMessage
{
  public:
    InputCombActionFieldMessage(const CThostFtdcInputCombActionField* inputcombactionfieldmessage):
      type_(INPUTCOMBACTIONFIELDMESSAGE)
    {
      memset(&inputcombactionfieldmessage_, 0x0, sizeof(inputcombactionfieldmessage_));

      if( inputcombactionfieldmessage )
      {
        memcpy(&inputcombactionfieldmessage_, inputcombactionfieldmessage, sizeof(inputcombactionfieldmessage_));
      }
    }

    virtual ~InputCombActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InputCombActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InputCombActionFieldMessage not support this function");
    }

    CThostFtdcInputCombActionField inputcombactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InputCombActionFieldMessage const& aInputCombActionFieldMessage)
{
    os <<std::endl;
    os <<"## InputCombActionFieldMessage ##" <<std::endl;
    os <<aInputCombActionFieldMessage.inputcombactionfieldmessage_; 
    os <<"## end InputCombActionFieldMessage ##" <<std::endl;
}

class CombActionFieldMessage : public FieldMessage
{
  public:
    CombActionFieldMessage(const CThostFtdcCombActionField* combactionfieldmessage):
      type_(COMBACTIONFIELDMESSAGE)
    {
      memset(&combactionfieldmessage_, 0x0, sizeof(combactionfieldmessage_));

      if( combactionfieldmessage )
      {
        memcpy(&combactionfieldmessage_, combactionfieldmessage, sizeof(combactionfieldmessage_));
      }
    }

    virtual ~CombActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CombActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CombActionFieldMessage not support this function");
    }

    CThostFtdcCombActionField combactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CombActionFieldMessage const& aCombActionFieldMessage)
{
    os <<std::endl;
    os <<"## CombActionFieldMessage ##" <<std::endl;
    os <<aCombActionFieldMessage.combactionfieldmessage_; 
    os <<"## end CombActionFieldMessage ##" <<std::endl;
}

class QryCombActionFieldMessage : public FieldMessage
{
  public:
    QryCombActionFieldMessage(const CThostFtdcQryCombActionField* qrycombactionfieldmessage):
      type_(QRYCOMBACTIONFIELDMESSAGE)
    {
      memset(&qrycombactionfieldmessage_, 0x0, sizeof(qrycombactionfieldmessage_));

      if( qrycombactionfieldmessage )
      {
        memcpy(&qrycombactionfieldmessage_, qrycombactionfieldmessage, sizeof(qrycombactionfieldmessage_));
      }
    }

    virtual ~QryCombActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCombActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCombActionFieldMessage not support this function");
    }

    CThostFtdcQryCombActionField qrycombactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCombActionFieldMessage const& aQryCombActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryCombActionFieldMessage ##" <<std::endl;
    os <<aQryCombActionFieldMessage.qrycombactionfieldmessage_; 
    os <<"## end QryCombActionFieldMessage ##" <<std::endl;
}

class ExchangeCombActionFieldMessage : public FieldMessage
{
  public:
    ExchangeCombActionFieldMessage(const CThostFtdcExchangeCombActionField* exchangecombactionfieldmessage):
      type_(EXCHANGECOMBACTIONFIELDMESSAGE)
    {
      memset(&exchangecombactionfieldmessage_, 0x0, sizeof(exchangecombactionfieldmessage_));

      if( exchangecombactionfieldmessage )
      {
        memcpy(&exchangecombactionfieldmessage_, exchangecombactionfieldmessage, sizeof(exchangecombactionfieldmessage_));
      }
    }

    virtual ~ExchangeCombActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeCombActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeCombActionFieldMessage not support this function");
    }

    CThostFtdcExchangeCombActionField exchangecombactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeCombActionFieldMessage const& aExchangeCombActionFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeCombActionFieldMessage ##" <<std::endl;
    os <<aExchangeCombActionFieldMessage.exchangecombactionfieldmessage_; 
    os <<"## end ExchangeCombActionFieldMessage ##" <<std::endl;
}

class QryExchangeCombActionFieldMessage : public FieldMessage
{
  public:
    QryExchangeCombActionFieldMessage(const CThostFtdcQryExchangeCombActionField* qryexchangecombactionfieldmessage):
      type_(QRYEXCHANGECOMBACTIONFIELDMESSAGE)
    {
      memset(&qryexchangecombactionfieldmessage_, 0x0, sizeof(qryexchangecombactionfieldmessage_));

      if( qryexchangecombactionfieldmessage )
      {
        memcpy(&qryexchangecombactionfieldmessage_, qryexchangecombactionfieldmessage, sizeof(qryexchangecombactionfieldmessage_));
      }
    }

    virtual ~QryExchangeCombActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeCombActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeCombActionFieldMessage not support this function");
    }

    CThostFtdcQryExchangeCombActionField qryexchangecombactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeCombActionFieldMessage const& aQryExchangeCombActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeCombActionFieldMessage ##" <<std::endl;
    os <<aQryExchangeCombActionFieldMessage.qryexchangecombactionfieldmessage_; 
    os <<"## end QryExchangeCombActionFieldMessage ##" <<std::endl;
}

class ProductExchRateFieldMessage : public FieldMessage
{
  public:
    ProductExchRateFieldMessage(const CThostFtdcProductExchRateField* productexchratefieldmessage):
      type_(PRODUCTEXCHRATEFIELDMESSAGE)
    {
      memset(&productexchratefieldmessage_, 0x0, sizeof(productexchratefieldmessage_));

      if( productexchratefieldmessage )
      {
        memcpy(&productexchratefieldmessage_, productexchratefieldmessage, sizeof(productexchratefieldmessage_));
      }
    }

    virtual ~ProductExchRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ProductExchRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ProductExchRateFieldMessage not support this function");
    }

    CThostFtdcProductExchRateField productexchratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ProductExchRateFieldMessage const& aProductExchRateFieldMessage)
{
    os <<std::endl;
    os <<"## ProductExchRateFieldMessage ##" <<std::endl;
    os <<aProductExchRateFieldMessage.productexchratefieldmessage_; 
    os <<"## end ProductExchRateFieldMessage ##" <<std::endl;
}

class QryProductExchRateFieldMessage : public FieldMessage
{
  public:
    QryProductExchRateFieldMessage(const CThostFtdcQryProductExchRateField* qryproductexchratefieldmessage):
      type_(QRYPRODUCTEXCHRATEFIELDMESSAGE)
    {
      memset(&qryproductexchratefieldmessage_, 0x0, sizeof(qryproductexchratefieldmessage_));

      if( qryproductexchratefieldmessage )
      {
        memcpy(&qryproductexchratefieldmessage_, qryproductexchratefieldmessage, sizeof(qryproductexchratefieldmessage_));
      }
    }

    virtual ~QryProductExchRateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryProductExchRateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryProductExchRateFieldMessage not support this function");
    }

    CThostFtdcQryProductExchRateField qryproductexchratefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryProductExchRateFieldMessage const& aQryProductExchRateFieldMessage)
{
    os <<std::endl;
    os <<"## QryProductExchRateFieldMessage ##" <<std::endl;
    os <<aQryProductExchRateFieldMessage.qryproductexchratefieldmessage_; 
    os <<"## end QryProductExchRateFieldMessage ##" <<std::endl;
}

class MarketDataFieldMessage : public FieldMessage
{
  public:
    MarketDataFieldMessage(const CThostFtdcMarketDataField* marketdatafieldmessage):
      type_(MARKETDATAFIELDMESSAGE)
    {
      memset(&marketdatafieldmessage_, 0x0, sizeof(marketdatafieldmessage_));

      if( marketdatafieldmessage )
      {
        memcpy(&marketdatafieldmessage_, marketdatafieldmessage, sizeof(marketdatafieldmessage_));
      }
    }

    virtual ~MarketDataFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataFieldMessage not support this function");
    }

    CThostFtdcMarketDataField marketdatafieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataFieldMessage const& aMarketDataFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataFieldMessage ##" <<std::endl;
    os <<aMarketDataFieldMessage.marketdatafieldmessage_; 
    os <<"## end MarketDataFieldMessage ##" <<std::endl;
}

class MarketDataBaseFieldMessage : public FieldMessage
{
  public:
    MarketDataBaseFieldMessage(const CThostFtdcMarketDataBaseField* marketdatabasefieldmessage):
      type_(MARKETDATABASEFIELDMESSAGE)
    {
      memset(&marketdatabasefieldmessage_, 0x0, sizeof(marketdatabasefieldmessage_));

      if( marketdatabasefieldmessage )
      {
        memcpy(&marketdatabasefieldmessage_, marketdatabasefieldmessage, sizeof(marketdatabasefieldmessage_));
      }
    }

    virtual ~MarketDataBaseFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataBaseFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataBaseFieldMessage not support this function");
    }

    CThostFtdcMarketDataBaseField marketdatabasefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataBaseFieldMessage const& aMarketDataBaseFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataBaseFieldMessage ##" <<std::endl;
    os <<aMarketDataBaseFieldMessage.marketdatabasefieldmessage_; 
    os <<"## end MarketDataBaseFieldMessage ##" <<std::endl;
}

class MarketDataStaticFieldMessage : public FieldMessage
{
  public:
    MarketDataStaticFieldMessage(const CThostFtdcMarketDataStaticField* marketdatastaticfieldmessage):
      type_(MARKETDATASTATICFIELDMESSAGE)
    {
      memset(&marketdatastaticfieldmessage_, 0x0, sizeof(marketdatastaticfieldmessage_));

      if( marketdatastaticfieldmessage )
      {
        memcpy(&marketdatastaticfieldmessage_, marketdatastaticfieldmessage, sizeof(marketdatastaticfieldmessage_));
      }
    }

    virtual ~MarketDataStaticFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataStaticFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataStaticFieldMessage not support this function");
    }

    CThostFtdcMarketDataStaticField marketdatastaticfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataStaticFieldMessage const& aMarketDataStaticFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataStaticFieldMessage ##" <<std::endl;
    os <<aMarketDataStaticFieldMessage.marketdatastaticfieldmessage_; 
    os <<"## end MarketDataStaticFieldMessage ##" <<std::endl;
}

class MarketDataLastMatchFieldMessage : public FieldMessage
{
  public:
    MarketDataLastMatchFieldMessage(const CThostFtdcMarketDataLastMatchField* marketdatalastmatchfieldmessage):
      type_(MARKETDATALASTMATCHFIELDMESSAGE)
    {
      memset(&marketdatalastmatchfieldmessage_, 0x0, sizeof(marketdatalastmatchfieldmessage_));

      if( marketdatalastmatchfieldmessage )
      {
        memcpy(&marketdatalastmatchfieldmessage_, marketdatalastmatchfieldmessage, sizeof(marketdatalastmatchfieldmessage_));
      }
    }

    virtual ~MarketDataLastMatchFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataLastMatchFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataLastMatchFieldMessage not support this function");
    }

    CThostFtdcMarketDataLastMatchField marketdatalastmatchfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataLastMatchFieldMessage const& aMarketDataLastMatchFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataLastMatchFieldMessage ##" <<std::endl;
    os <<aMarketDataLastMatchFieldMessage.marketdatalastmatchfieldmessage_; 
    os <<"## end MarketDataLastMatchFieldMessage ##" <<std::endl;
}

class MarketDataBestPriceFieldMessage : public FieldMessage
{
  public:
    MarketDataBestPriceFieldMessage(const CThostFtdcMarketDataBestPriceField* marketdatabestpricefieldmessage):
      type_(MARKETDATABESTPRICEFIELDMESSAGE)
    {
      memset(&marketdatabestpricefieldmessage_, 0x0, sizeof(marketdatabestpricefieldmessage_));

      if( marketdatabestpricefieldmessage )
      {
        memcpy(&marketdatabestpricefieldmessage_, marketdatabestpricefieldmessage, sizeof(marketdatabestpricefieldmessage_));
      }
    }

    virtual ~MarketDataBestPriceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataBestPriceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataBestPriceFieldMessage not support this function");
    }

    CThostFtdcMarketDataBestPriceField marketdatabestpricefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataBestPriceFieldMessage const& aMarketDataBestPriceFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataBestPriceFieldMessage ##" <<std::endl;
    os <<aMarketDataBestPriceFieldMessage.marketdatabestpricefieldmessage_; 
    os <<"## end MarketDataBestPriceFieldMessage ##" <<std::endl;
}

class MarketDataBid23FieldMessage : public FieldMessage
{
  public:
    MarketDataBid23FieldMessage(const CThostFtdcMarketDataBid23Field* marketdatabid23fieldmessage):
      type_(MARKETDATABID23FIELDMESSAGE)
    {
      memset(&marketdatabid23fieldmessage_, 0x0, sizeof(marketdatabid23fieldmessage_));

      if( marketdatabid23fieldmessage )
      {
        memcpy(&marketdatabid23fieldmessage_, marketdatabid23fieldmessage, sizeof(marketdatabid23fieldmessage_));
      }
    }

    virtual ~MarketDataBid23FieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataBid23FieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataBid23FieldMessage not support this function");
    }

    CThostFtdcMarketDataBid23Field marketdatabid23fieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataBid23FieldMessage const& aMarketDataBid23FieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataBid23FieldMessage ##" <<std::endl;
    os <<aMarketDataBid23FieldMessage.marketdatabid23fieldmessage_; 
    os <<"## end MarketDataBid23FieldMessage ##" <<std::endl;
}

class MarketDataAsk23FieldMessage : public FieldMessage
{
  public:
    MarketDataAsk23FieldMessage(const CThostFtdcMarketDataAsk23Field* marketdataask23fieldmessage):
      type_(MARKETDATAASK23FIELDMESSAGE)
    {
      memset(&marketdataask23fieldmessage_, 0x0, sizeof(marketdataask23fieldmessage_));

      if( marketdataask23fieldmessage )
      {
        memcpy(&marketdataask23fieldmessage_, marketdataask23fieldmessage, sizeof(marketdataask23fieldmessage_));
      }
    }

    virtual ~MarketDataAsk23FieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataAsk23FieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataAsk23FieldMessage not support this function");
    }

    CThostFtdcMarketDataAsk23Field marketdataask23fieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataAsk23FieldMessage const& aMarketDataAsk23FieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataAsk23FieldMessage ##" <<std::endl;
    os <<aMarketDataAsk23FieldMessage.marketdataask23fieldmessage_; 
    os <<"## end MarketDataAsk23FieldMessage ##" <<std::endl;
}

class MarketDataBid45FieldMessage : public FieldMessage
{
  public:
    MarketDataBid45FieldMessage(const CThostFtdcMarketDataBid45Field* marketdatabid45fieldmessage):
      type_(MARKETDATABID45FIELDMESSAGE)
    {
      memset(&marketdatabid45fieldmessage_, 0x0, sizeof(marketdatabid45fieldmessage_));

      if( marketdatabid45fieldmessage )
      {
        memcpy(&marketdatabid45fieldmessage_, marketdatabid45fieldmessage, sizeof(marketdatabid45fieldmessage_));
      }
    }

    virtual ~MarketDataBid45FieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataBid45FieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataBid45FieldMessage not support this function");
    }

    CThostFtdcMarketDataBid45Field marketdatabid45fieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataBid45FieldMessage const& aMarketDataBid45FieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataBid45FieldMessage ##" <<std::endl;
    os <<aMarketDataBid45FieldMessage.marketdatabid45fieldmessage_; 
    os <<"## end MarketDataBid45FieldMessage ##" <<std::endl;
}

class MarketDataAsk45FieldMessage : public FieldMessage
{
  public:
    MarketDataAsk45FieldMessage(const CThostFtdcMarketDataAsk45Field* marketdataask45fieldmessage):
      type_(MARKETDATAASK45FIELDMESSAGE)
    {
      memset(&marketdataask45fieldmessage_, 0x0, sizeof(marketdataask45fieldmessage_));

      if( marketdataask45fieldmessage )
      {
        memcpy(&marketdataask45fieldmessage_, marketdataask45fieldmessage, sizeof(marketdataask45fieldmessage_));
      }
    }

    virtual ~MarketDataAsk45FieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataAsk45FieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataAsk45FieldMessage not support this function");
    }

    CThostFtdcMarketDataAsk45Field marketdataask45fieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataAsk45FieldMessage const& aMarketDataAsk45FieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataAsk45FieldMessage ##" <<std::endl;
    os <<aMarketDataAsk45FieldMessage.marketdataask45fieldmessage_; 
    os <<"## end MarketDataAsk45FieldMessage ##" <<std::endl;
}

class MarketDataUpdateTimeFieldMessage : public FieldMessage
{
  public:
    MarketDataUpdateTimeFieldMessage(const CThostFtdcMarketDataUpdateTimeField* marketdataupdatetimefieldmessage):
      type_(MARKETDATAUPDATETIMEFIELDMESSAGE)
    {
      memset(&marketdataupdatetimefieldmessage_, 0x0, sizeof(marketdataupdatetimefieldmessage_));

      if( marketdataupdatetimefieldmessage )
      {
        memcpy(&marketdataupdatetimefieldmessage_, marketdataupdatetimefieldmessage, sizeof(marketdataupdatetimefieldmessage_));
      }
    }

    virtual ~MarketDataUpdateTimeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataUpdateTimeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataUpdateTimeFieldMessage not support this function");
    }

    CThostFtdcMarketDataUpdateTimeField marketdataupdatetimefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataUpdateTimeFieldMessage const& aMarketDataUpdateTimeFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataUpdateTimeFieldMessage ##" <<std::endl;
    os <<aMarketDataUpdateTimeFieldMessage.marketdataupdatetimefieldmessage_; 
    os <<"## end MarketDataUpdateTimeFieldMessage ##" <<std::endl;
}

class MarketDataExchangeFieldMessage : public FieldMessage
{
  public:
    MarketDataExchangeFieldMessage(const CThostFtdcMarketDataExchangeField* marketdataexchangefieldmessage):
      type_(MARKETDATAEXCHANGEFIELDMESSAGE)
    {
      memset(&marketdataexchangefieldmessage_, 0x0, sizeof(marketdataexchangefieldmessage_));

      if( marketdataexchangefieldmessage )
      {
        memcpy(&marketdataexchangefieldmessage_, marketdataexchangefieldmessage, sizeof(marketdataexchangefieldmessage_));
      }
    }

    virtual ~MarketDataExchangeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataExchangeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataExchangeFieldMessage not support this function");
    }

    CThostFtdcMarketDataExchangeField marketdataexchangefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataExchangeFieldMessage const& aMarketDataExchangeFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataExchangeFieldMessage ##" <<std::endl;
    os <<aMarketDataExchangeFieldMessage.marketdataexchangefieldmessage_; 
    os <<"## end MarketDataExchangeFieldMessage ##" <<std::endl;
}

class SpecificInstrumentFieldMessage : public FieldMessage
{
  public:
    SpecificInstrumentFieldMessage(const CThostFtdcSpecificInstrumentField* specificinstrumentfieldmessage):
      type_(SPECIFICINSTRUMENTFIELDMESSAGE)
    {
      memset(&specificinstrumentfieldmessage_, 0x0, sizeof(specificinstrumentfieldmessage_));

      if( specificinstrumentfieldmessage )
      {
        memcpy(&specificinstrumentfieldmessage_, specificinstrumentfieldmessage, sizeof(specificinstrumentfieldmessage_));
      }
    }

    virtual ~SpecificInstrumentFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SpecificInstrumentFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SpecificInstrumentFieldMessage not support this function");
    }

    CThostFtdcSpecificInstrumentField specificinstrumentfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SpecificInstrumentFieldMessage const& aSpecificInstrumentFieldMessage)
{
    os <<std::endl;
    os <<"## SpecificInstrumentFieldMessage ##" <<std::endl;
    os <<aSpecificInstrumentFieldMessage.specificinstrumentfieldmessage_; 
    os <<"## end SpecificInstrumentFieldMessage ##" <<std::endl;
}

class InstrumentStatusFieldMessage : public FieldMessage
{
  public:
    InstrumentStatusFieldMessage(const CThostFtdcInstrumentStatusField* instrumentstatusfieldmessage):
      type_(INSTRUMENTSTATUSFIELDMESSAGE)
    {
      memset(&instrumentstatusfieldmessage_, 0x0, sizeof(instrumentstatusfieldmessage_));

      if( instrumentstatusfieldmessage )
      {
        memcpy(&instrumentstatusfieldmessage_, instrumentstatusfieldmessage, sizeof(instrumentstatusfieldmessage_));
      }
    }

    virtual ~InstrumentStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentStatusFieldMessage not support this function");
    }

    CThostFtdcInstrumentStatusField instrumentstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentStatusFieldMessage const& aInstrumentStatusFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentStatusFieldMessage ##" <<std::endl;
    os <<aInstrumentStatusFieldMessage.instrumentstatusfieldmessage_; 
    os <<"## end InstrumentStatusFieldMessage ##" <<std::endl;
}

class QryInstrumentStatusFieldMessage : public FieldMessage
{
  public:
    QryInstrumentStatusFieldMessage(const CThostFtdcQryInstrumentStatusField* qryinstrumentstatusfieldmessage):
      type_(QRYINSTRUMENTSTATUSFIELDMESSAGE)
    {
      memset(&qryinstrumentstatusfieldmessage_, 0x0, sizeof(qryinstrumentstatusfieldmessage_));

      if( qryinstrumentstatusfieldmessage )
      {
        memcpy(&qryinstrumentstatusfieldmessage_, qryinstrumentstatusfieldmessage, sizeof(qryinstrumentstatusfieldmessage_));
      }
    }

    virtual ~QryInstrumentStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInstrumentStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInstrumentStatusFieldMessage not support this function");
    }

    CThostFtdcQryInstrumentStatusField qryinstrumentstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInstrumentStatusFieldMessage const& aQryInstrumentStatusFieldMessage)
{
    os <<std::endl;
    os <<"## QryInstrumentStatusFieldMessage ##" <<std::endl;
    os <<aQryInstrumentStatusFieldMessage.qryinstrumentstatusfieldmessage_; 
    os <<"## end QryInstrumentStatusFieldMessage ##" <<std::endl;
}

class InvestorAccountFieldMessage : public FieldMessage
{
  public:
    InvestorAccountFieldMessage(const CThostFtdcInvestorAccountField* investoraccountfieldmessage):
      type_(INVESTORACCOUNTFIELDMESSAGE)
    {
      memset(&investoraccountfieldmessage_, 0x0, sizeof(investoraccountfieldmessage_));

      if( investoraccountfieldmessage )
      {
        memcpy(&investoraccountfieldmessage_, investoraccountfieldmessage, sizeof(investoraccountfieldmessage_));
      }
    }

    virtual ~InvestorAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorAccountFieldMessage not support this function");
    }

    CThostFtdcInvestorAccountField investoraccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorAccountFieldMessage const& aInvestorAccountFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorAccountFieldMessage ##" <<std::endl;
    os <<aInvestorAccountFieldMessage.investoraccountfieldmessage_; 
    os <<"## end InvestorAccountFieldMessage ##" <<std::endl;
}

class PositionProfitAlgorithmFieldMessage : public FieldMessage
{
  public:
    PositionProfitAlgorithmFieldMessage(const CThostFtdcPositionProfitAlgorithmField* positionprofitalgorithmfieldmessage):
      type_(POSITIONPROFITALGORITHMFIELDMESSAGE)
    {
      memset(&positionprofitalgorithmfieldmessage_, 0x0, sizeof(positionprofitalgorithmfieldmessage_));

      if( positionprofitalgorithmfieldmessage )
      {
        memcpy(&positionprofitalgorithmfieldmessage_, positionprofitalgorithmfieldmessage, sizeof(positionprofitalgorithmfieldmessage_));
      }
    }

    virtual ~PositionProfitAlgorithmFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type PositionProfitAlgorithmFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type PositionProfitAlgorithmFieldMessage not support this function");
    }

    CThostFtdcPositionProfitAlgorithmField positionprofitalgorithmfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, PositionProfitAlgorithmFieldMessage const& aPositionProfitAlgorithmFieldMessage)
{
    os <<std::endl;
    os <<"## PositionProfitAlgorithmFieldMessage ##" <<std::endl;
    os <<aPositionProfitAlgorithmFieldMessage.positionprofitalgorithmfieldmessage_; 
    os <<"## end PositionProfitAlgorithmFieldMessage ##" <<std::endl;
}

class DiscountFieldMessage : public FieldMessage
{
  public:
    DiscountFieldMessage(const CThostFtdcDiscountField* discountfieldmessage):
      type_(DISCOUNTFIELDMESSAGE)
    {
      memset(&discountfieldmessage_, 0x0, sizeof(discountfieldmessage_));

      if( discountfieldmessage )
      {
        memcpy(&discountfieldmessage_, discountfieldmessage, sizeof(discountfieldmessage_));
      }
    }

    virtual ~DiscountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type DiscountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type DiscountFieldMessage not support this function");
    }

    CThostFtdcDiscountField discountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DiscountFieldMessage const& aDiscountFieldMessage)
{
    os <<std::endl;
    os <<"## DiscountFieldMessage ##" <<std::endl;
    os <<aDiscountFieldMessage.discountfieldmessage_; 
    os <<"## end DiscountFieldMessage ##" <<std::endl;
}

class QryTransferBankFieldMessage : public FieldMessage
{
  public:
    QryTransferBankFieldMessage(const CThostFtdcQryTransferBankField* qrytransferbankfieldmessage):
      type_(QRYTRANSFERBANKFIELDMESSAGE)
    {
      memset(&qrytransferbankfieldmessage_, 0x0, sizeof(qrytransferbankfieldmessage_));

      if( qrytransferbankfieldmessage )
      {
        memcpy(&qrytransferbankfieldmessage_, qrytransferbankfieldmessage, sizeof(qrytransferbankfieldmessage_));
      }
    }

    virtual ~QryTransferBankFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTransferBankFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTransferBankFieldMessage not support this function");
    }

    CThostFtdcQryTransferBankField qrytransferbankfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTransferBankFieldMessage const& aQryTransferBankFieldMessage)
{
    os <<std::endl;
    os <<"## QryTransferBankFieldMessage ##" <<std::endl;
    os <<aQryTransferBankFieldMessage.qrytransferbankfieldmessage_; 
    os <<"## end QryTransferBankFieldMessage ##" <<std::endl;
}

class TransferBankFieldMessage : public FieldMessage
{
  public:
    TransferBankFieldMessage(const CThostFtdcTransferBankField* transferbankfieldmessage):
      type_(TRANSFERBANKFIELDMESSAGE)
    {
      memset(&transferbankfieldmessage_, 0x0, sizeof(transferbankfieldmessage_));

      if( transferbankfieldmessage )
      {
        memcpy(&transferbankfieldmessage_, transferbankfieldmessage, sizeof(transferbankfieldmessage_));
      }
    }

    virtual ~TransferBankFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferBankFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferBankFieldMessage not support this function");
    }

    CThostFtdcTransferBankField transferbankfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferBankFieldMessage const& aTransferBankFieldMessage)
{
    os <<std::endl;
    os <<"## TransferBankFieldMessage ##" <<std::endl;
    os <<aTransferBankFieldMessage.transferbankfieldmessage_; 
    os <<"## end TransferBankFieldMessage ##" <<std::endl;
}

class QryInvestorPositionDetailFieldMessage : public FieldMessage
{
  public:
    QryInvestorPositionDetailFieldMessage(const CThostFtdcQryInvestorPositionDetailField* qryinvestorpositiondetailfieldmessage):
      type_(QRYINVESTORPOSITIONDETAILFIELDMESSAGE)
    {
      memset(&qryinvestorpositiondetailfieldmessage_, 0x0, sizeof(qryinvestorpositiondetailfieldmessage_));

      if( qryinvestorpositiondetailfieldmessage )
      {
        memcpy(&qryinvestorpositiondetailfieldmessage_, qryinvestorpositiondetailfieldmessage, sizeof(qryinvestorpositiondetailfieldmessage_));
      }
    }

    virtual ~QryInvestorPositionDetailFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionDetailFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionDetailFieldMessage not support this function");
    }

    CThostFtdcQryInvestorPositionDetailField qryinvestorpositiondetailfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorPositionDetailFieldMessage const& aQryInvestorPositionDetailFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorPositionDetailFieldMessage ##" <<std::endl;
    os <<aQryInvestorPositionDetailFieldMessage.qryinvestorpositiondetailfieldmessage_; 
    os <<"## end QryInvestorPositionDetailFieldMessage ##" <<std::endl;
}

class InvestorPositionDetailFieldMessage : public FieldMessage
{
  public:
    InvestorPositionDetailFieldMessage(const CThostFtdcInvestorPositionDetailField* investorpositiondetailfieldmessage):
      type_(INVESTORPOSITIONDETAILFIELDMESSAGE)
    {
      memset(&investorpositiondetailfieldmessage_, 0x0, sizeof(investorpositiondetailfieldmessage_));

      if( investorpositiondetailfieldmessage )
      {
        memcpy(&investorpositiondetailfieldmessage_, investorpositiondetailfieldmessage, sizeof(investorpositiondetailfieldmessage_));
      }
    }

    virtual ~InvestorPositionDetailFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorPositionDetailFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorPositionDetailFieldMessage not support this function");
    }

    CThostFtdcInvestorPositionDetailField investorpositiondetailfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorPositionDetailFieldMessage const& aInvestorPositionDetailFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorPositionDetailFieldMessage ##" <<std::endl;
    os <<aInvestorPositionDetailFieldMessage.investorpositiondetailfieldmessage_; 
    os <<"## end InvestorPositionDetailFieldMessage ##" <<std::endl;
}

class TradingAccountPasswordFieldMessage : public FieldMessage
{
  public:
    TradingAccountPasswordFieldMessage(const CThostFtdcTradingAccountPasswordField* tradingaccountpasswordfieldmessage):
      type_(TRADINGACCOUNTPASSWORDFIELDMESSAGE)
    {
      memset(&tradingaccountpasswordfieldmessage_, 0x0, sizeof(tradingaccountpasswordfieldmessage_));

      if( tradingaccountpasswordfieldmessage )
      {
        memcpy(&tradingaccountpasswordfieldmessage_, tradingaccountpasswordfieldmessage, sizeof(tradingaccountpasswordfieldmessage_));
      }
    }

    virtual ~TradingAccountPasswordFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordFieldMessage not support this function");
    }

    CThostFtdcTradingAccountPasswordField tradingaccountpasswordfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingAccountPasswordFieldMessage const& aTradingAccountPasswordFieldMessage)
{
    os <<std::endl;
    os <<"## TradingAccountPasswordFieldMessage ##" <<std::endl;
    os <<aTradingAccountPasswordFieldMessage.tradingaccountpasswordfieldmessage_; 
    os <<"## end TradingAccountPasswordFieldMessage ##" <<std::endl;
}

class MDTraderOfferFieldMessage : public FieldMessage
{
  public:
    MDTraderOfferFieldMessage(const CThostFtdcMDTraderOfferField* mdtraderofferfieldmessage):
      type_(MDTRADEROFFERFIELDMESSAGE)
    {
      memset(&mdtraderofferfieldmessage_, 0x0, sizeof(mdtraderofferfieldmessage_));

      if( mdtraderofferfieldmessage )
      {
        memcpy(&mdtraderofferfieldmessage_, mdtraderofferfieldmessage, sizeof(mdtraderofferfieldmessage_));
      }
    }

    virtual ~MDTraderOfferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MDTraderOfferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MDTraderOfferFieldMessage not support this function");
    }

    CThostFtdcMDTraderOfferField mdtraderofferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MDTraderOfferFieldMessage const& aMDTraderOfferFieldMessage)
{
    os <<std::endl;
    os <<"## MDTraderOfferFieldMessage ##" <<std::endl;
    os <<aMDTraderOfferFieldMessage.mdtraderofferfieldmessage_; 
    os <<"## end MDTraderOfferFieldMessage ##" <<std::endl;
}

class QryMDTraderOfferFieldMessage : public FieldMessage
{
  public:
    QryMDTraderOfferFieldMessage(const CThostFtdcQryMDTraderOfferField* qrymdtraderofferfieldmessage):
      type_(QRYMDTRADEROFFERFIELDMESSAGE)
    {
      memset(&qrymdtraderofferfieldmessage_, 0x0, sizeof(qrymdtraderofferfieldmessage_));

      if( qrymdtraderofferfieldmessage )
      {
        memcpy(&qrymdtraderofferfieldmessage_, qrymdtraderofferfieldmessage, sizeof(qrymdtraderofferfieldmessage_));
      }
    }

    virtual ~QryMDTraderOfferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryMDTraderOfferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryMDTraderOfferFieldMessage not support this function");
    }

    CThostFtdcQryMDTraderOfferField qrymdtraderofferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryMDTraderOfferFieldMessage const& aQryMDTraderOfferFieldMessage)
{
    os <<std::endl;
    os <<"## QryMDTraderOfferFieldMessage ##" <<std::endl;
    os <<aQryMDTraderOfferFieldMessage.qrymdtraderofferfieldmessage_; 
    os <<"## end QryMDTraderOfferFieldMessage ##" <<std::endl;
}

class QryNoticeFieldMessage : public FieldMessage
{
  public:
    QryNoticeFieldMessage(const CThostFtdcQryNoticeField* qrynoticefieldmessage):
      type_(QRYNOTICEFIELDMESSAGE)
    {
      memset(&qrynoticefieldmessage_, 0x0, sizeof(qrynoticefieldmessage_));

      if( qrynoticefieldmessage )
      {
        memcpy(&qrynoticefieldmessage_, qrynoticefieldmessage, sizeof(qrynoticefieldmessage_));
      }
    }

    virtual ~QryNoticeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryNoticeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryNoticeFieldMessage not support this function");
    }

    CThostFtdcQryNoticeField qrynoticefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryNoticeFieldMessage const& aQryNoticeFieldMessage)
{
    os <<std::endl;
    os <<"## QryNoticeFieldMessage ##" <<std::endl;
    os <<aQryNoticeFieldMessage.qrynoticefieldmessage_; 
    os <<"## end QryNoticeFieldMessage ##" <<std::endl;
}

class NoticeFieldMessage : public FieldMessage
{
  public:
    NoticeFieldMessage(const CThostFtdcNoticeField* noticefieldmessage):
      type_(NOTICEFIELDMESSAGE)
    {
      memset(&noticefieldmessage_, 0x0, sizeof(noticefieldmessage_));

      if( noticefieldmessage )
      {
        memcpy(&noticefieldmessage_, noticefieldmessage, sizeof(noticefieldmessage_));
      }
    }

    virtual ~NoticeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type NoticeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type NoticeFieldMessage not support this function");
    }

    CThostFtdcNoticeField noticefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, NoticeFieldMessage const& aNoticeFieldMessage)
{
    os <<std::endl;
    os <<"## NoticeFieldMessage ##" <<std::endl;
    os <<aNoticeFieldMessage.noticefieldmessage_; 
    os <<"## end NoticeFieldMessage ##" <<std::endl;
}

class UserRightFieldMessage : public FieldMessage
{
  public:
    UserRightFieldMessage(const CThostFtdcUserRightField* userrightfieldmessage):
      type_(USERRIGHTFIELDMESSAGE)
    {
      memset(&userrightfieldmessage_, 0x0, sizeof(userrightfieldmessage_));

      if( userrightfieldmessage )
      {
        memcpy(&userrightfieldmessage_, userrightfieldmessage, sizeof(userrightfieldmessage_));
      }
    }

    virtual ~UserRightFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserRightFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserRightFieldMessage not support this function");
    }

    CThostFtdcUserRightField userrightfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserRightFieldMessage const& aUserRightFieldMessage)
{
    os <<std::endl;
    os <<"## UserRightFieldMessage ##" <<std::endl;
    os <<aUserRightFieldMessage.userrightfieldmessage_; 
    os <<"## end UserRightFieldMessage ##" <<std::endl;
}

class QrySettlementInfoConfirmFieldMessage : public FieldMessage
{
  public:
    QrySettlementInfoConfirmFieldMessage(const CThostFtdcQrySettlementInfoConfirmField* qrysettlementinfoconfirmfieldmessage):
      type_(QRYSETTLEMENTINFOCONFIRMFIELDMESSAGE)
    {
      memset(&qrysettlementinfoconfirmfieldmessage_, 0x0, sizeof(qrysettlementinfoconfirmfieldmessage_));

      if( qrysettlementinfoconfirmfieldmessage )
      {
        memcpy(&qrysettlementinfoconfirmfieldmessage_, qrysettlementinfoconfirmfieldmessage, sizeof(qrysettlementinfoconfirmfieldmessage_));
      }
    }

    virtual ~QrySettlementInfoConfirmFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySettlementInfoConfirmFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySettlementInfoConfirmFieldMessage not support this function");
    }

    CThostFtdcQrySettlementInfoConfirmField qrysettlementinfoconfirmfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySettlementInfoConfirmFieldMessage const& aQrySettlementInfoConfirmFieldMessage)
{
    os <<std::endl;
    os <<"## QrySettlementInfoConfirmFieldMessage ##" <<std::endl;
    os <<aQrySettlementInfoConfirmFieldMessage.qrysettlementinfoconfirmfieldmessage_; 
    os <<"## end QrySettlementInfoConfirmFieldMessage ##" <<std::endl;
}

class LoadSettlementInfoFieldMessage : public FieldMessage
{
  public:
    LoadSettlementInfoFieldMessage(const CThostFtdcLoadSettlementInfoField* loadsettlementinfofieldmessage):
      type_(LOADSETTLEMENTINFOFIELDMESSAGE)
    {
      memset(&loadsettlementinfofieldmessage_, 0x0, sizeof(loadsettlementinfofieldmessage_));

      if( loadsettlementinfofieldmessage )
      {
        memcpy(&loadsettlementinfofieldmessage_, loadsettlementinfofieldmessage, sizeof(loadsettlementinfofieldmessage_));
      }
    }

    virtual ~LoadSettlementInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type LoadSettlementInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type LoadSettlementInfoFieldMessage not support this function");
    }

    CThostFtdcLoadSettlementInfoField loadsettlementinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, LoadSettlementInfoFieldMessage const& aLoadSettlementInfoFieldMessage)
{
    os <<std::endl;
    os <<"## LoadSettlementInfoFieldMessage ##" <<std::endl;
    os <<aLoadSettlementInfoFieldMessage.loadsettlementinfofieldmessage_; 
    os <<"## end LoadSettlementInfoFieldMessage ##" <<std::endl;
}

class BrokerWithdrawAlgorithmFieldMessage : public FieldMessage
{
  public:
    BrokerWithdrawAlgorithmFieldMessage(const CThostFtdcBrokerWithdrawAlgorithmField* brokerwithdrawalgorithmfieldmessage):
      type_(BROKERWITHDRAWALGORITHMFIELDMESSAGE)
    {
      memset(&brokerwithdrawalgorithmfieldmessage_, 0x0, sizeof(brokerwithdrawalgorithmfieldmessage_));

      if( brokerwithdrawalgorithmfieldmessage )
      {
        memcpy(&brokerwithdrawalgorithmfieldmessage_, brokerwithdrawalgorithmfieldmessage, sizeof(brokerwithdrawalgorithmfieldmessage_));
      }
    }

    virtual ~BrokerWithdrawAlgorithmFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerWithdrawAlgorithmFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerWithdrawAlgorithmFieldMessage not support this function");
    }

    CThostFtdcBrokerWithdrawAlgorithmField brokerwithdrawalgorithmfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerWithdrawAlgorithmFieldMessage const& aBrokerWithdrawAlgorithmFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerWithdrawAlgorithmFieldMessage ##" <<std::endl;
    os <<aBrokerWithdrawAlgorithmFieldMessage.brokerwithdrawalgorithmfieldmessage_; 
    os <<"## end BrokerWithdrawAlgorithmFieldMessage ##" <<std::endl;
}

class TradingAccountPasswordUpdateV1FieldMessage : public FieldMessage
{
  public:
    TradingAccountPasswordUpdateV1FieldMessage(const CThostFtdcTradingAccountPasswordUpdateV1Field* tradingaccountpasswordupdatev1fieldmessage):
      type_(TRADINGACCOUNTPASSWORDUPDATEV1FIELDMESSAGE)
    {
      memset(&tradingaccountpasswordupdatev1fieldmessage_, 0x0, sizeof(tradingaccountpasswordupdatev1fieldmessage_));

      if( tradingaccountpasswordupdatev1fieldmessage )
      {
        memcpy(&tradingaccountpasswordupdatev1fieldmessage_, tradingaccountpasswordupdatev1fieldmessage, sizeof(tradingaccountpasswordupdatev1fieldmessage_));
      }
    }

    virtual ~TradingAccountPasswordUpdateV1FieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordUpdateV1FieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordUpdateV1FieldMessage not support this function");
    }

    CThostFtdcTradingAccountPasswordUpdateV1Field tradingaccountpasswordupdatev1fieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingAccountPasswordUpdateV1FieldMessage const& aTradingAccountPasswordUpdateV1FieldMessage)
{
    os <<std::endl;
    os <<"## TradingAccountPasswordUpdateV1FieldMessage ##" <<std::endl;
    os <<aTradingAccountPasswordUpdateV1FieldMessage.tradingaccountpasswordupdatev1fieldmessage_; 
    os <<"## end TradingAccountPasswordUpdateV1FieldMessage ##" <<std::endl;
}

class TradingAccountPasswordUpdateFieldMessage : public FieldMessage
{
  public:
    TradingAccountPasswordUpdateFieldMessage(const CThostFtdcTradingAccountPasswordUpdateField* tradingaccountpasswordupdatefieldmessage):
      type_(TRADINGACCOUNTPASSWORDUPDATEFIELDMESSAGE)
    {
      memset(&tradingaccountpasswordupdatefieldmessage_, 0x0, sizeof(tradingaccountpasswordupdatefieldmessage_));

      if( tradingaccountpasswordupdatefieldmessage )
      {
        memcpy(&tradingaccountpasswordupdatefieldmessage_, tradingaccountpasswordupdatefieldmessage, sizeof(tradingaccountpasswordupdatefieldmessage_));
      }
    }

    virtual ~TradingAccountPasswordUpdateFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordUpdateFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingAccountPasswordUpdateFieldMessage not support this function");
    }

    CThostFtdcTradingAccountPasswordUpdateField tradingaccountpasswordupdatefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingAccountPasswordUpdateFieldMessage const& aTradingAccountPasswordUpdateFieldMessage)
{
    os <<std::endl;
    os <<"## TradingAccountPasswordUpdateFieldMessage ##" <<std::endl;
    os <<aTradingAccountPasswordUpdateFieldMessage.tradingaccountpasswordupdatefieldmessage_; 
    os <<"## end TradingAccountPasswordUpdateFieldMessage ##" <<std::endl;
}

class QryCombinationLegFieldMessage : public FieldMessage
{
  public:
    QryCombinationLegFieldMessage(const CThostFtdcQryCombinationLegField* qrycombinationlegfieldmessage):
      type_(QRYCOMBINATIONLEGFIELDMESSAGE)
    {
      memset(&qrycombinationlegfieldmessage_, 0x0, sizeof(qrycombinationlegfieldmessage_));

      if( qrycombinationlegfieldmessage )
      {
        memcpy(&qrycombinationlegfieldmessage_, qrycombinationlegfieldmessage, sizeof(qrycombinationlegfieldmessage_));
      }
    }

    virtual ~QryCombinationLegFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCombinationLegFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCombinationLegFieldMessage not support this function");
    }

    CThostFtdcQryCombinationLegField qrycombinationlegfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCombinationLegFieldMessage const& aQryCombinationLegFieldMessage)
{
    os <<std::endl;
    os <<"## QryCombinationLegFieldMessage ##" <<std::endl;
    os <<aQryCombinationLegFieldMessage.qrycombinationlegfieldmessage_; 
    os <<"## end QryCombinationLegFieldMessage ##" <<std::endl;
}

class QrySyncStatusFieldMessage : public FieldMessage
{
  public:
    QrySyncStatusFieldMessage(const CThostFtdcQrySyncStatusField* qrysyncstatusfieldmessage):
      type_(QRYSYNCSTATUSFIELDMESSAGE)
    {
      memset(&qrysyncstatusfieldmessage_, 0x0, sizeof(qrysyncstatusfieldmessage_));

      if( qrysyncstatusfieldmessage )
      {
        memcpy(&qrysyncstatusfieldmessage_, qrysyncstatusfieldmessage, sizeof(qrysyncstatusfieldmessage_));
      }
    }

    virtual ~QrySyncStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySyncStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySyncStatusFieldMessage not support this function");
    }

    CThostFtdcQrySyncStatusField qrysyncstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySyncStatusFieldMessage const& aQrySyncStatusFieldMessage)
{
    os <<std::endl;
    os <<"## QrySyncStatusFieldMessage ##" <<std::endl;
    os <<aQrySyncStatusFieldMessage.qrysyncstatusfieldmessage_; 
    os <<"## end QrySyncStatusFieldMessage ##" <<std::endl;
}

class CombinationLegFieldMessage : public FieldMessage
{
  public:
    CombinationLegFieldMessage(const CThostFtdcCombinationLegField* combinationlegfieldmessage):
      type_(COMBINATIONLEGFIELDMESSAGE)
    {
      memset(&combinationlegfieldmessage_, 0x0, sizeof(combinationlegfieldmessage_));

      if( combinationlegfieldmessage )
      {
        memcpy(&combinationlegfieldmessage_, combinationlegfieldmessage, sizeof(combinationlegfieldmessage_));
      }
    }

    virtual ~CombinationLegFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CombinationLegFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CombinationLegFieldMessage not support this function");
    }

    CThostFtdcCombinationLegField combinationlegfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CombinationLegFieldMessage const& aCombinationLegFieldMessage)
{
    os <<std::endl;
    os <<"## CombinationLegFieldMessage ##" <<std::endl;
    os <<aCombinationLegFieldMessage.combinationlegfieldmessage_; 
    os <<"## end CombinationLegFieldMessage ##" <<std::endl;
}

class SyncStatusFieldMessage : public FieldMessage
{
  public:
    SyncStatusFieldMessage(const CThostFtdcSyncStatusField* syncstatusfieldmessage):
      type_(SYNCSTATUSFIELDMESSAGE)
    {
      memset(&syncstatusfieldmessage_, 0x0, sizeof(syncstatusfieldmessage_));

      if( syncstatusfieldmessage )
      {
        memcpy(&syncstatusfieldmessage_, syncstatusfieldmessage, sizeof(syncstatusfieldmessage_));
      }
    }

    virtual ~SyncStatusFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SyncStatusFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SyncStatusFieldMessage not support this function");
    }

    CThostFtdcSyncStatusField syncstatusfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SyncStatusFieldMessage const& aSyncStatusFieldMessage)
{
    os <<std::endl;
    os <<"## SyncStatusFieldMessage ##" <<std::endl;
    os <<aSyncStatusFieldMessage.syncstatusfieldmessage_; 
    os <<"## end SyncStatusFieldMessage ##" <<std::endl;
}

class QryLinkManFieldMessage : public FieldMessage
{
  public:
    QryLinkManFieldMessage(const CThostFtdcQryLinkManField* qrylinkmanfieldmessage):
      type_(QRYLINKMANFIELDMESSAGE)
    {
      memset(&qrylinkmanfieldmessage_, 0x0, sizeof(qrylinkmanfieldmessage_));

      if( qrylinkmanfieldmessage )
      {
        memcpy(&qrylinkmanfieldmessage_, qrylinkmanfieldmessage, sizeof(qrylinkmanfieldmessage_));
      }
    }

    virtual ~QryLinkManFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryLinkManFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryLinkManFieldMessage not support this function");
    }

    CThostFtdcQryLinkManField qrylinkmanfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryLinkManFieldMessage const& aQryLinkManFieldMessage)
{
    os <<std::endl;
    os <<"## QryLinkManFieldMessage ##" <<std::endl;
    os <<aQryLinkManFieldMessage.qrylinkmanfieldmessage_; 
    os <<"## end QryLinkManFieldMessage ##" <<std::endl;
}

class LinkManFieldMessage : public FieldMessage
{
  public:
    LinkManFieldMessage(const CThostFtdcLinkManField* linkmanfieldmessage):
      type_(LINKMANFIELDMESSAGE)
    {
      memset(&linkmanfieldmessage_, 0x0, sizeof(linkmanfieldmessage_));

      if( linkmanfieldmessage )
      {
        memcpy(&linkmanfieldmessage_, linkmanfieldmessage, sizeof(linkmanfieldmessage_));
      }
    }

    virtual ~LinkManFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type LinkManFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type LinkManFieldMessage not support this function");
    }

    CThostFtdcLinkManField linkmanfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, LinkManFieldMessage const& aLinkManFieldMessage)
{
    os <<std::endl;
    os <<"## LinkManFieldMessage ##" <<std::endl;
    os <<aLinkManFieldMessage.linkmanfieldmessage_; 
    os <<"## end LinkManFieldMessage ##" <<std::endl;
}

class QryBrokerUserEventFieldMessage : public FieldMessage
{
  public:
    QryBrokerUserEventFieldMessage(const CThostFtdcQryBrokerUserEventField* qrybrokerusereventfieldmessage):
      type_(QRYBROKERUSEREVENTFIELDMESSAGE)
    {
      memset(&qrybrokerusereventfieldmessage_, 0x0, sizeof(qrybrokerusereventfieldmessage_));

      if( qrybrokerusereventfieldmessage )
      {
        memcpy(&qrybrokerusereventfieldmessage_, qrybrokerusereventfieldmessage, sizeof(qrybrokerusereventfieldmessage_));
      }
    }

    virtual ~QryBrokerUserEventFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerUserEventFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerUserEventFieldMessage not support this function");
    }

    CThostFtdcQryBrokerUserEventField qrybrokerusereventfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerUserEventFieldMessage const& aQryBrokerUserEventFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerUserEventFieldMessage ##" <<std::endl;
    os <<aQryBrokerUserEventFieldMessage.qrybrokerusereventfieldmessage_; 
    os <<"## end QryBrokerUserEventFieldMessage ##" <<std::endl;
}

class BrokerUserEventFieldMessage : public FieldMessage
{
  public:
    BrokerUserEventFieldMessage(const CThostFtdcBrokerUserEventField* brokerusereventfieldmessage):
      type_(BROKERUSEREVENTFIELDMESSAGE)
    {
      memset(&brokerusereventfieldmessage_, 0x0, sizeof(brokerusereventfieldmessage_));

      if( brokerusereventfieldmessage )
      {
        memcpy(&brokerusereventfieldmessage_, brokerusereventfieldmessage, sizeof(brokerusereventfieldmessage_));
      }
    }

    virtual ~BrokerUserEventFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserEventFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserEventFieldMessage not support this function");
    }

    CThostFtdcBrokerUserEventField brokerusereventfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserEventFieldMessage const& aBrokerUserEventFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserEventFieldMessage ##" <<std::endl;
    os <<aBrokerUserEventFieldMessage.brokerusereventfieldmessage_; 
    os <<"## end BrokerUserEventFieldMessage ##" <<std::endl;
}

class QryContractBankFieldMessage : public FieldMessage
{
  public:
    QryContractBankFieldMessage(const CThostFtdcQryContractBankField* qrycontractbankfieldmessage):
      type_(QRYCONTRACTBANKFIELDMESSAGE)
    {
      memset(&qrycontractbankfieldmessage_, 0x0, sizeof(qrycontractbankfieldmessage_));

      if( qrycontractbankfieldmessage )
      {
        memcpy(&qrycontractbankfieldmessage_, qrycontractbankfieldmessage, sizeof(qrycontractbankfieldmessage_));
      }
    }

    virtual ~QryContractBankFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryContractBankFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryContractBankFieldMessage not support this function");
    }

    CThostFtdcQryContractBankField qrycontractbankfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryContractBankFieldMessage const& aQryContractBankFieldMessage)
{
    os <<std::endl;
    os <<"## QryContractBankFieldMessage ##" <<std::endl;
    os <<aQryContractBankFieldMessage.qrycontractbankfieldmessage_; 
    os <<"## end QryContractBankFieldMessage ##" <<std::endl;
}

class ContractBankFieldMessage : public FieldMessage
{
  public:
    ContractBankFieldMessage(const CThostFtdcContractBankField* contractbankfieldmessage):
      type_(CONTRACTBANKFIELDMESSAGE)
    {
      memset(&contractbankfieldmessage_, 0x0, sizeof(contractbankfieldmessage_));

      if( contractbankfieldmessage )
      {
        memcpy(&contractbankfieldmessage_, contractbankfieldmessage, sizeof(contractbankfieldmessage_));
      }
    }

    virtual ~ContractBankFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ContractBankFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ContractBankFieldMessage not support this function");
    }

    CThostFtdcContractBankField contractbankfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ContractBankFieldMessage const& aContractBankFieldMessage)
{
    os <<std::endl;
    os <<"## ContractBankFieldMessage ##" <<std::endl;
    os <<aContractBankFieldMessage.contractbankfieldmessage_; 
    os <<"## end ContractBankFieldMessage ##" <<std::endl;
}

class InvestorPositionCombineDetailFieldMessage : public FieldMessage
{
  public:
    InvestorPositionCombineDetailFieldMessage(const CThostFtdcInvestorPositionCombineDetailField* investorpositioncombinedetailfieldmessage):
      type_(INVESTORPOSITIONCOMBINEDETAILFIELDMESSAGE)
    {
      memset(&investorpositioncombinedetailfieldmessage_, 0x0, sizeof(investorpositioncombinedetailfieldmessage_));

      if( investorpositioncombinedetailfieldmessage )
      {
        memcpy(&investorpositioncombinedetailfieldmessage_, investorpositioncombinedetailfieldmessage, sizeof(investorpositioncombinedetailfieldmessage_));
      }
    }

    virtual ~InvestorPositionCombineDetailFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorPositionCombineDetailFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorPositionCombineDetailFieldMessage not support this function");
    }

    CThostFtdcInvestorPositionCombineDetailField investorpositioncombinedetailfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorPositionCombineDetailFieldMessage const& aInvestorPositionCombineDetailFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorPositionCombineDetailFieldMessage ##" <<std::endl;
    os <<aInvestorPositionCombineDetailFieldMessage.investorpositioncombinedetailfieldmessage_; 
    os <<"## end InvestorPositionCombineDetailFieldMessage ##" <<std::endl;
}

class ParkedOrderFieldMessage : public FieldMessage
{
  public:
    ParkedOrderFieldMessage(const CThostFtdcParkedOrderField* parkedorderfieldmessage):
      type_(PARKEDORDERFIELDMESSAGE)
    {
      memset(&parkedorderfieldmessage_, 0x0, sizeof(parkedorderfieldmessage_));

      if( parkedorderfieldmessage )
      {
        memcpy(&parkedorderfieldmessage_, parkedorderfieldmessage, sizeof(parkedorderfieldmessage_));
      }
    }

    virtual ~ParkedOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ParkedOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ParkedOrderFieldMessage not support this function");
    }

    CThostFtdcParkedOrderField parkedorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ParkedOrderFieldMessage const& aParkedOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ParkedOrderFieldMessage ##" <<std::endl;
    os <<aParkedOrderFieldMessage.parkedorderfieldmessage_; 
    os <<"## end ParkedOrderFieldMessage ##" <<std::endl;
}

class ParkedOrderActionFieldMessage : public FieldMessage
{
  public:
    ParkedOrderActionFieldMessage(const CThostFtdcParkedOrderActionField* parkedorderactionfieldmessage):
      type_(PARKEDORDERACTIONFIELDMESSAGE)
    {
      memset(&parkedorderactionfieldmessage_, 0x0, sizeof(parkedorderactionfieldmessage_));

      if( parkedorderactionfieldmessage )
      {
        memcpy(&parkedorderactionfieldmessage_, parkedorderactionfieldmessage, sizeof(parkedorderactionfieldmessage_));
      }
    }

    virtual ~ParkedOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ParkedOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ParkedOrderActionFieldMessage not support this function");
    }

    CThostFtdcParkedOrderActionField parkedorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ParkedOrderActionFieldMessage const& aParkedOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ParkedOrderActionFieldMessage ##" <<std::endl;
    os <<aParkedOrderActionFieldMessage.parkedorderactionfieldmessage_; 
    os <<"## end ParkedOrderActionFieldMessage ##" <<std::endl;
}

class QryParkedOrderFieldMessage : public FieldMessage
{
  public:
    QryParkedOrderFieldMessage(const CThostFtdcQryParkedOrderField* qryparkedorderfieldmessage):
      type_(QRYPARKEDORDERFIELDMESSAGE)
    {
      memset(&qryparkedorderfieldmessage_, 0x0, sizeof(qryparkedorderfieldmessage_));

      if( qryparkedorderfieldmessage )
      {
        memcpy(&qryparkedorderfieldmessage_, qryparkedorderfieldmessage, sizeof(qryparkedorderfieldmessage_));
      }
    }

    virtual ~QryParkedOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryParkedOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryParkedOrderFieldMessage not support this function");
    }

    CThostFtdcQryParkedOrderField qryparkedorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryParkedOrderFieldMessage const& aQryParkedOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryParkedOrderFieldMessage ##" <<std::endl;
    os <<aQryParkedOrderFieldMessage.qryparkedorderfieldmessage_; 
    os <<"## end QryParkedOrderFieldMessage ##" <<std::endl;
}

class QryParkedOrderActionFieldMessage : public FieldMessage
{
  public:
    QryParkedOrderActionFieldMessage(const CThostFtdcQryParkedOrderActionField* qryparkedorderactionfieldmessage):
      type_(QRYPARKEDORDERACTIONFIELDMESSAGE)
    {
      memset(&qryparkedorderactionfieldmessage_, 0x0, sizeof(qryparkedorderactionfieldmessage_));

      if( qryparkedorderactionfieldmessage )
      {
        memcpy(&qryparkedorderactionfieldmessage_, qryparkedorderactionfieldmessage, sizeof(qryparkedorderactionfieldmessage_));
      }
    }

    virtual ~QryParkedOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryParkedOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryParkedOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryParkedOrderActionField qryparkedorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryParkedOrderActionFieldMessage const& aQryParkedOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryParkedOrderActionFieldMessage ##" <<std::endl;
    os <<aQryParkedOrderActionFieldMessage.qryparkedorderactionfieldmessage_; 
    os <<"## end QryParkedOrderActionFieldMessage ##" <<std::endl;
}

class RemoveParkedOrderFieldMessage : public FieldMessage
{
  public:
    RemoveParkedOrderFieldMessage(const CThostFtdcRemoveParkedOrderField* removeparkedorderfieldmessage):
      type_(REMOVEPARKEDORDERFIELDMESSAGE)
    {
      memset(&removeparkedorderfieldmessage_, 0x0, sizeof(removeparkedorderfieldmessage_));

      if( removeparkedorderfieldmessage )
      {
        memcpy(&removeparkedorderfieldmessage_, removeparkedorderfieldmessage, sizeof(removeparkedorderfieldmessage_));
      }
    }

    virtual ~RemoveParkedOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RemoveParkedOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RemoveParkedOrderFieldMessage not support this function");
    }

    CThostFtdcRemoveParkedOrderField removeparkedorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RemoveParkedOrderFieldMessage const& aRemoveParkedOrderFieldMessage)
{
    os <<std::endl;
    os <<"## RemoveParkedOrderFieldMessage ##" <<std::endl;
    os <<aRemoveParkedOrderFieldMessage.removeparkedorderfieldmessage_; 
    os <<"## end RemoveParkedOrderFieldMessage ##" <<std::endl;
}

class RemoveParkedOrderActionFieldMessage : public FieldMessage
{
  public:
    RemoveParkedOrderActionFieldMessage(const CThostFtdcRemoveParkedOrderActionField* removeparkedorderactionfieldmessage):
      type_(REMOVEPARKEDORDERACTIONFIELDMESSAGE)
    {
      memset(&removeparkedorderactionfieldmessage_, 0x0, sizeof(removeparkedorderactionfieldmessage_));

      if( removeparkedorderactionfieldmessage )
      {
        memcpy(&removeparkedorderactionfieldmessage_, removeparkedorderactionfieldmessage, sizeof(removeparkedorderactionfieldmessage_));
      }
    }

    virtual ~RemoveParkedOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RemoveParkedOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RemoveParkedOrderActionFieldMessage not support this function");
    }

    CThostFtdcRemoveParkedOrderActionField removeparkedorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RemoveParkedOrderActionFieldMessage const& aRemoveParkedOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## RemoveParkedOrderActionFieldMessage ##" <<std::endl;
    os <<aRemoveParkedOrderActionFieldMessage.removeparkedorderactionfieldmessage_; 
    os <<"## end RemoveParkedOrderActionFieldMessage ##" <<std::endl;
}

class InvestorWithdrawAlgorithmFieldMessage : public FieldMessage
{
  public:
    InvestorWithdrawAlgorithmFieldMessage(const CThostFtdcInvestorWithdrawAlgorithmField* investorwithdrawalgorithmfieldmessage):
      type_(INVESTORWITHDRAWALGORITHMFIELDMESSAGE)
    {
      memset(&investorwithdrawalgorithmfieldmessage_, 0x0, sizeof(investorwithdrawalgorithmfieldmessage_));

      if( investorwithdrawalgorithmfieldmessage )
      {
        memcpy(&investorwithdrawalgorithmfieldmessage_, investorwithdrawalgorithmfieldmessage, sizeof(investorwithdrawalgorithmfieldmessage_));
      }
    }

    virtual ~InvestorWithdrawAlgorithmFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorWithdrawAlgorithmFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorWithdrawAlgorithmFieldMessage not support this function");
    }

    CThostFtdcInvestorWithdrawAlgorithmField investorwithdrawalgorithmfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorWithdrawAlgorithmFieldMessage const& aInvestorWithdrawAlgorithmFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorWithdrawAlgorithmFieldMessage ##" <<std::endl;
    os <<aInvestorWithdrawAlgorithmFieldMessage.investorwithdrawalgorithmfieldmessage_; 
    os <<"## end InvestorWithdrawAlgorithmFieldMessage ##" <<std::endl;
}

class QryInvestorPositionCombineDetailFieldMessage : public FieldMessage
{
  public:
    QryInvestorPositionCombineDetailFieldMessage(const CThostFtdcQryInvestorPositionCombineDetailField* qryinvestorpositioncombinedetailfieldmessage):
      type_(QRYINVESTORPOSITIONCOMBINEDETAILFIELDMESSAGE)
    {
      memset(&qryinvestorpositioncombinedetailfieldmessage_, 0x0, sizeof(qryinvestorpositioncombinedetailfieldmessage_));

      if( qryinvestorpositioncombinedetailfieldmessage )
      {
        memcpy(&qryinvestorpositioncombinedetailfieldmessage_, qryinvestorpositioncombinedetailfieldmessage, sizeof(qryinvestorpositioncombinedetailfieldmessage_));
      }
    }

    virtual ~QryInvestorPositionCombineDetailFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionCombineDetailFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorPositionCombineDetailFieldMessage not support this function");
    }

    CThostFtdcQryInvestorPositionCombineDetailField qryinvestorpositioncombinedetailfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorPositionCombineDetailFieldMessage const& aQryInvestorPositionCombineDetailFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorPositionCombineDetailFieldMessage ##" <<std::endl;
    os <<aQryInvestorPositionCombineDetailFieldMessage.qryinvestorpositioncombinedetailfieldmessage_; 
    os <<"## end QryInvestorPositionCombineDetailFieldMessage ##" <<std::endl;
}

class MarketDataAveragePriceFieldMessage : public FieldMessage
{
  public:
    MarketDataAveragePriceFieldMessage(const CThostFtdcMarketDataAveragePriceField* marketdataaveragepricefieldmessage):
      type_(MARKETDATAAVERAGEPRICEFIELDMESSAGE)
    {
      memset(&marketdataaveragepricefieldmessage_, 0x0, sizeof(marketdataaveragepricefieldmessage_));

      if( marketdataaveragepricefieldmessage )
      {
        memcpy(&marketdataaveragepricefieldmessage_, marketdataaveragepricefieldmessage, sizeof(marketdataaveragepricefieldmessage_));
      }
    }

    virtual ~MarketDataAveragePriceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarketDataAveragePriceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarketDataAveragePriceFieldMessage not support this function");
    }

    CThostFtdcMarketDataAveragePriceField marketdataaveragepricefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarketDataAveragePriceFieldMessage const& aMarketDataAveragePriceFieldMessage)
{
    os <<std::endl;
    os <<"## MarketDataAveragePriceFieldMessage ##" <<std::endl;
    os <<aMarketDataAveragePriceFieldMessage.marketdataaveragepricefieldmessage_; 
    os <<"## end MarketDataAveragePriceFieldMessage ##" <<std::endl;
}

class VerifyInvestorPasswordFieldMessage : public FieldMessage
{
  public:
    VerifyInvestorPasswordFieldMessage(const CThostFtdcVerifyInvestorPasswordField* verifyinvestorpasswordfieldmessage):
      type_(VERIFYINVESTORPASSWORDFIELDMESSAGE)
    {
      memset(&verifyinvestorpasswordfieldmessage_, 0x0, sizeof(verifyinvestorpasswordfieldmessage_));

      if( verifyinvestorpasswordfieldmessage )
      {
        memcpy(&verifyinvestorpasswordfieldmessage_, verifyinvestorpasswordfieldmessage, sizeof(verifyinvestorpasswordfieldmessage_));
      }
    }

    virtual ~VerifyInvestorPasswordFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type VerifyInvestorPasswordFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type VerifyInvestorPasswordFieldMessage not support this function");
    }

    CThostFtdcVerifyInvestorPasswordField verifyinvestorpasswordfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, VerifyInvestorPasswordFieldMessage const& aVerifyInvestorPasswordFieldMessage)
{
    os <<std::endl;
    os <<"## VerifyInvestorPasswordFieldMessage ##" <<std::endl;
    os <<aVerifyInvestorPasswordFieldMessage.verifyinvestorpasswordfieldmessage_; 
    os <<"## end VerifyInvestorPasswordFieldMessage ##" <<std::endl;
}

class UserIPFieldMessage : public FieldMessage
{
  public:
    UserIPFieldMessage(const CThostFtdcUserIPField* useripfieldmessage):
      type_(USERIPFIELDMESSAGE)
    {
      memset(&useripfieldmessage_, 0x0, sizeof(useripfieldmessage_));

      if( useripfieldmessage )
      {
        memcpy(&useripfieldmessage_, useripfieldmessage, sizeof(useripfieldmessage_));
      }
    }

    virtual ~UserIPFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserIPFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserIPFieldMessage not support this function");
    }

    CThostFtdcUserIPField useripfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserIPFieldMessage const& aUserIPFieldMessage)
{
    os <<std::endl;
    os <<"## UserIPFieldMessage ##" <<std::endl;
    os <<aUserIPFieldMessage.useripfieldmessage_; 
    os <<"## end UserIPFieldMessage ##" <<std::endl;
}

class TradingNoticeInfoFieldMessage : public FieldMessage
{
  public:
    TradingNoticeInfoFieldMessage(const CThostFtdcTradingNoticeInfoField* tradingnoticeinfofieldmessage):
      type_(TRADINGNOTICEINFOFIELDMESSAGE)
    {
      memset(&tradingnoticeinfofieldmessage_, 0x0, sizeof(tradingnoticeinfofieldmessage_));

      if( tradingnoticeinfofieldmessage )
      {
        memcpy(&tradingnoticeinfofieldmessage_, tradingnoticeinfofieldmessage, sizeof(tradingnoticeinfofieldmessage_));
      }
    }

    virtual ~TradingNoticeInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingNoticeInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingNoticeInfoFieldMessage not support this function");
    }

    CThostFtdcTradingNoticeInfoField tradingnoticeinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingNoticeInfoFieldMessage const& aTradingNoticeInfoFieldMessage)
{
    os <<std::endl;
    os <<"## TradingNoticeInfoFieldMessage ##" <<std::endl;
    os <<aTradingNoticeInfoFieldMessage.tradingnoticeinfofieldmessage_; 
    os <<"## end TradingNoticeInfoFieldMessage ##" <<std::endl;
}

class TradingNoticeFieldMessage : public FieldMessage
{
  public:
    TradingNoticeFieldMessage(const CThostFtdcTradingNoticeField* tradingnoticefieldmessage):
      type_(TRADINGNOTICEFIELDMESSAGE)
    {
      memset(&tradingnoticefieldmessage_, 0x0, sizeof(tradingnoticefieldmessage_));

      if( tradingnoticefieldmessage )
      {
        memcpy(&tradingnoticefieldmessage_, tradingnoticefieldmessage, sizeof(tradingnoticefieldmessage_));
      }
    }

    virtual ~TradingNoticeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingNoticeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingNoticeFieldMessage not support this function");
    }

    CThostFtdcTradingNoticeField tradingnoticefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingNoticeFieldMessage const& aTradingNoticeFieldMessage)
{
    os <<std::endl;
    os <<"## TradingNoticeFieldMessage ##" <<std::endl;
    os <<aTradingNoticeFieldMessage.tradingnoticefieldmessage_; 
    os <<"## end TradingNoticeFieldMessage ##" <<std::endl;
}

class QryTradingNoticeFieldMessage : public FieldMessage
{
  public:
    QryTradingNoticeFieldMessage(const CThostFtdcQryTradingNoticeField* qrytradingnoticefieldmessage):
      type_(QRYTRADINGNOTICEFIELDMESSAGE)
    {
      memset(&qrytradingnoticefieldmessage_, 0x0, sizeof(qrytradingnoticefieldmessage_));

      if( qrytradingnoticefieldmessage )
      {
        memcpy(&qrytradingnoticefieldmessage_, qrytradingnoticefieldmessage, sizeof(qrytradingnoticefieldmessage_));
      }
    }

    virtual ~QryTradingNoticeFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTradingNoticeFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTradingNoticeFieldMessage not support this function");
    }

    CThostFtdcQryTradingNoticeField qrytradingnoticefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTradingNoticeFieldMessage const& aQryTradingNoticeFieldMessage)
{
    os <<std::endl;
    os <<"## QryTradingNoticeFieldMessage ##" <<std::endl;
    os <<aQryTradingNoticeFieldMessage.qrytradingnoticefieldmessage_; 
    os <<"## end QryTradingNoticeFieldMessage ##" <<std::endl;
}

class QryErrOrderFieldMessage : public FieldMessage
{
  public:
    QryErrOrderFieldMessage(const CThostFtdcQryErrOrderField* qryerrorderfieldmessage):
      type_(QRYERRORDERFIELDMESSAGE)
    {
      memset(&qryerrorderfieldmessage_, 0x0, sizeof(qryerrorderfieldmessage_));

      if( qryerrorderfieldmessage )
      {
        memcpy(&qryerrorderfieldmessage_, qryerrorderfieldmessage, sizeof(qryerrorderfieldmessage_));
      }
    }

    virtual ~QryErrOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryErrOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryErrOrderFieldMessage not support this function");
    }

    CThostFtdcQryErrOrderField qryerrorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryErrOrderFieldMessage const& aQryErrOrderFieldMessage)
{
    os <<std::endl;
    os <<"## QryErrOrderFieldMessage ##" <<std::endl;
    os <<aQryErrOrderFieldMessage.qryerrorderfieldmessage_; 
    os <<"## end QryErrOrderFieldMessage ##" <<std::endl;
}

class ErrOrderFieldMessage : public FieldMessage
{
  public:
    ErrOrderFieldMessage(const CThostFtdcErrOrderField* errorderfieldmessage):
      type_(ERRORDERFIELDMESSAGE)
    {
      memset(&errorderfieldmessage_, 0x0, sizeof(errorderfieldmessage_));

      if( errorderfieldmessage )
      {
        memcpy(&errorderfieldmessage_, errorderfieldmessage, sizeof(errorderfieldmessage_));
      }
    }

    virtual ~ErrOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ErrOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ErrOrderFieldMessage not support this function");
    }

    CThostFtdcErrOrderField errorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ErrOrderFieldMessage const& aErrOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ErrOrderFieldMessage ##" <<std::endl;
    os <<aErrOrderFieldMessage.errorderfieldmessage_; 
    os <<"## end ErrOrderFieldMessage ##" <<std::endl;
}

class ErrorConditionalOrderFieldMessage : public FieldMessage
{
  public:
    ErrorConditionalOrderFieldMessage(const CThostFtdcErrorConditionalOrderField* errorconditionalorderfieldmessage):
      type_(ERRORCONDITIONALORDERFIELDMESSAGE)
    {
      memset(&errorconditionalorderfieldmessage_, 0x0, sizeof(errorconditionalorderfieldmessage_));

      if( errorconditionalorderfieldmessage )
      {
        memcpy(&errorconditionalorderfieldmessage_, errorconditionalorderfieldmessage, sizeof(errorconditionalorderfieldmessage_));
      }
    }

    virtual ~ErrorConditionalOrderFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ErrorConditionalOrderFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ErrorConditionalOrderFieldMessage not support this function");
    }

    CThostFtdcErrorConditionalOrderField errorconditionalorderfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ErrorConditionalOrderFieldMessage const& aErrorConditionalOrderFieldMessage)
{
    os <<std::endl;
    os <<"## ErrorConditionalOrderFieldMessage ##" <<std::endl;
    os <<aErrorConditionalOrderFieldMessage.errorconditionalorderfieldmessage_; 
    os <<"## end ErrorConditionalOrderFieldMessage ##" <<std::endl;
}

class QryErrOrderActionFieldMessage : public FieldMessage
{
  public:
    QryErrOrderActionFieldMessage(const CThostFtdcQryErrOrderActionField* qryerrorderactionfieldmessage):
      type_(QRYERRORDERACTIONFIELDMESSAGE)
    {
      memset(&qryerrorderactionfieldmessage_, 0x0, sizeof(qryerrorderactionfieldmessage_));

      if( qryerrorderactionfieldmessage )
      {
        memcpy(&qryerrorderactionfieldmessage_, qryerrorderactionfieldmessage, sizeof(qryerrorderactionfieldmessage_));
      }
    }

    virtual ~QryErrOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryErrOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryErrOrderActionFieldMessage not support this function");
    }

    CThostFtdcQryErrOrderActionField qryerrorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryErrOrderActionFieldMessage const& aQryErrOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## QryErrOrderActionFieldMessage ##" <<std::endl;
    os <<aQryErrOrderActionFieldMessage.qryerrorderactionfieldmessage_; 
    os <<"## end QryErrOrderActionFieldMessage ##" <<std::endl;
}

class ErrOrderActionFieldMessage : public FieldMessage
{
  public:
    ErrOrderActionFieldMessage(const CThostFtdcErrOrderActionField* errorderactionfieldmessage):
      type_(ERRORDERACTIONFIELDMESSAGE)
    {
      memset(&errorderactionfieldmessage_, 0x0, sizeof(errorderactionfieldmessage_));

      if( errorderactionfieldmessage )
      {
        memcpy(&errorderactionfieldmessage_, errorderactionfieldmessage, sizeof(errorderactionfieldmessage_));
      }
    }

    virtual ~ErrOrderActionFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ErrOrderActionFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ErrOrderActionFieldMessage not support this function");
    }

    CThostFtdcErrOrderActionField errorderactionfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ErrOrderActionFieldMessage const& aErrOrderActionFieldMessage)
{
    os <<std::endl;
    os <<"## ErrOrderActionFieldMessage ##" <<std::endl;
    os <<aErrOrderActionFieldMessage.errorderactionfieldmessage_; 
    os <<"## end ErrOrderActionFieldMessage ##" <<std::endl;
}

class QryExchangeSequenceFieldMessage : public FieldMessage
{
  public:
    QryExchangeSequenceFieldMessage(const CThostFtdcQryExchangeSequenceField* qryexchangesequencefieldmessage):
      type_(QRYEXCHANGESEQUENCEFIELDMESSAGE)
    {
      memset(&qryexchangesequencefieldmessage_, 0x0, sizeof(qryexchangesequencefieldmessage_));

      if( qryexchangesequencefieldmessage )
      {
        memcpy(&qryexchangesequencefieldmessage_, qryexchangesequencefieldmessage, sizeof(qryexchangesequencefieldmessage_));
      }
    }

    virtual ~QryExchangeSequenceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryExchangeSequenceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryExchangeSequenceFieldMessage not support this function");
    }

    CThostFtdcQryExchangeSequenceField qryexchangesequencefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryExchangeSequenceFieldMessage const& aQryExchangeSequenceFieldMessage)
{
    os <<std::endl;
    os <<"## QryExchangeSequenceFieldMessage ##" <<std::endl;
    os <<aQryExchangeSequenceFieldMessage.qryexchangesequencefieldmessage_; 
    os <<"## end QryExchangeSequenceFieldMessage ##" <<std::endl;
}

class ExchangeSequenceFieldMessage : public FieldMessage
{
  public:
    ExchangeSequenceFieldMessage(const CThostFtdcExchangeSequenceField* exchangesequencefieldmessage):
      type_(EXCHANGESEQUENCEFIELDMESSAGE)
    {
      memset(&exchangesequencefieldmessage_, 0x0, sizeof(exchangesequencefieldmessage_));

      if( exchangesequencefieldmessage )
      {
        memcpy(&exchangesequencefieldmessage_, exchangesequencefieldmessage, sizeof(exchangesequencefieldmessage_));
      }
    }

    virtual ~ExchangeSequenceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ExchangeSequenceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ExchangeSequenceFieldMessage not support this function");
    }

    CThostFtdcExchangeSequenceField exchangesequencefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ExchangeSequenceFieldMessage const& aExchangeSequenceFieldMessage)
{
    os <<std::endl;
    os <<"## ExchangeSequenceFieldMessage ##" <<std::endl;
    os <<aExchangeSequenceFieldMessage.exchangesequencefieldmessage_; 
    os <<"## end ExchangeSequenceFieldMessage ##" <<std::endl;
}

class QueryMaxOrderVolumeWithPriceFieldMessage : public FieldMessage
{
  public:
    QueryMaxOrderVolumeWithPriceFieldMessage(const CThostFtdcQueryMaxOrderVolumeWithPriceField* querymaxordervolumewithpricefieldmessage):
      type_(QUERYMAXORDERVOLUMEWITHPRICEFIELDMESSAGE)
    {
      memset(&querymaxordervolumewithpricefieldmessage_, 0x0, sizeof(querymaxordervolumewithpricefieldmessage_));

      if( querymaxordervolumewithpricefieldmessage )
      {
        memcpy(&querymaxordervolumewithpricefieldmessage_, querymaxordervolumewithpricefieldmessage, sizeof(querymaxordervolumewithpricefieldmessage_));
      }
    }

    virtual ~QueryMaxOrderVolumeWithPriceFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QueryMaxOrderVolumeWithPriceFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QueryMaxOrderVolumeWithPriceFieldMessage not support this function");
    }

    CThostFtdcQueryMaxOrderVolumeWithPriceField querymaxordervolumewithpricefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QueryMaxOrderVolumeWithPriceFieldMessage const& aQueryMaxOrderVolumeWithPriceFieldMessage)
{
    os <<std::endl;
    os <<"## QueryMaxOrderVolumeWithPriceFieldMessage ##" <<std::endl;
    os <<aQueryMaxOrderVolumeWithPriceFieldMessage.querymaxordervolumewithpricefieldmessage_; 
    os <<"## end QueryMaxOrderVolumeWithPriceFieldMessage ##" <<std::endl;
}

class QryBrokerTradingParamsFieldMessage : public FieldMessage
{
  public:
    QryBrokerTradingParamsFieldMessage(const CThostFtdcQryBrokerTradingParamsField* qrybrokertradingparamsfieldmessage):
      type_(QRYBROKERTRADINGPARAMSFIELDMESSAGE)
    {
      memset(&qrybrokertradingparamsfieldmessage_, 0x0, sizeof(qrybrokertradingparamsfieldmessage_));

      if( qrybrokertradingparamsfieldmessage )
      {
        memcpy(&qrybrokertradingparamsfieldmessage_, qrybrokertradingparamsfieldmessage, sizeof(qrybrokertradingparamsfieldmessage_));
      }
    }

    virtual ~QryBrokerTradingParamsFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerTradingParamsFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerTradingParamsFieldMessage not support this function");
    }

    CThostFtdcQryBrokerTradingParamsField qrybrokertradingparamsfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerTradingParamsFieldMessage const& aQryBrokerTradingParamsFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerTradingParamsFieldMessage ##" <<std::endl;
    os <<aQryBrokerTradingParamsFieldMessage.qrybrokertradingparamsfieldmessage_; 
    os <<"## end QryBrokerTradingParamsFieldMessage ##" <<std::endl;
}

class BrokerTradingParamsFieldMessage : public FieldMessage
{
  public:
    BrokerTradingParamsFieldMessage(const CThostFtdcBrokerTradingParamsField* brokertradingparamsfieldmessage):
      type_(BROKERTRADINGPARAMSFIELDMESSAGE)
    {
      memset(&brokertradingparamsfieldmessage_, 0x0, sizeof(brokertradingparamsfieldmessage_));

      if( brokertradingparamsfieldmessage )
      {
        memcpy(&brokertradingparamsfieldmessage_, brokertradingparamsfieldmessage, sizeof(brokertradingparamsfieldmessage_));
      }
    }

    virtual ~BrokerTradingParamsFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerTradingParamsFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerTradingParamsFieldMessage not support this function");
    }

    CThostFtdcBrokerTradingParamsField brokertradingparamsfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerTradingParamsFieldMessage const& aBrokerTradingParamsFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerTradingParamsFieldMessage ##" <<std::endl;
    os <<aBrokerTradingParamsFieldMessage.brokertradingparamsfieldmessage_; 
    os <<"## end BrokerTradingParamsFieldMessage ##" <<std::endl;
}

class QryBrokerTradingAlgosFieldMessage : public FieldMessage
{
  public:
    QryBrokerTradingAlgosFieldMessage(const CThostFtdcQryBrokerTradingAlgosField* qrybrokertradingalgosfieldmessage):
      type_(QRYBROKERTRADINGALGOSFIELDMESSAGE)
    {
      memset(&qrybrokertradingalgosfieldmessage_, 0x0, sizeof(qrybrokertradingalgosfieldmessage_));

      if( qrybrokertradingalgosfieldmessage )
      {
        memcpy(&qrybrokertradingalgosfieldmessage_, qrybrokertradingalgosfieldmessage, sizeof(qrybrokertradingalgosfieldmessage_));
      }
    }

    virtual ~QryBrokerTradingAlgosFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryBrokerTradingAlgosFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryBrokerTradingAlgosFieldMessage not support this function");
    }

    CThostFtdcQryBrokerTradingAlgosField qrybrokertradingalgosfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryBrokerTradingAlgosFieldMessage const& aQryBrokerTradingAlgosFieldMessage)
{
    os <<std::endl;
    os <<"## QryBrokerTradingAlgosFieldMessage ##" <<std::endl;
    os <<aQryBrokerTradingAlgosFieldMessage.qrybrokertradingalgosfieldmessage_; 
    os <<"## end QryBrokerTradingAlgosFieldMessage ##" <<std::endl;
}

class BrokerTradingAlgosFieldMessage : public FieldMessage
{
  public:
    BrokerTradingAlgosFieldMessage(const CThostFtdcBrokerTradingAlgosField* brokertradingalgosfieldmessage):
      type_(BROKERTRADINGALGOSFIELDMESSAGE)
    {
      memset(&brokertradingalgosfieldmessage_, 0x0, sizeof(brokertradingalgosfieldmessage_));

      if( brokertradingalgosfieldmessage )
      {
        memcpy(&brokertradingalgosfieldmessage_, brokertradingalgosfieldmessage, sizeof(brokertradingalgosfieldmessage_));
      }
    }

    virtual ~BrokerTradingAlgosFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerTradingAlgosFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerTradingAlgosFieldMessage not support this function");
    }

    CThostFtdcBrokerTradingAlgosField brokertradingalgosfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerTradingAlgosFieldMessage const& aBrokerTradingAlgosFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerTradingAlgosFieldMessage ##" <<std::endl;
    os <<aBrokerTradingAlgosFieldMessage.brokertradingalgosfieldmessage_; 
    os <<"## end BrokerTradingAlgosFieldMessage ##" <<std::endl;
}

class QueryBrokerDepositFieldMessage : public FieldMessage
{
  public:
    QueryBrokerDepositFieldMessage(const CThostFtdcQueryBrokerDepositField* querybrokerdepositfieldmessage):
      type_(QUERYBROKERDEPOSITFIELDMESSAGE)
    {
      memset(&querybrokerdepositfieldmessage_, 0x0, sizeof(querybrokerdepositfieldmessage_));

      if( querybrokerdepositfieldmessage )
      {
        memcpy(&querybrokerdepositfieldmessage_, querybrokerdepositfieldmessage, sizeof(querybrokerdepositfieldmessage_));
      }
    }

    virtual ~QueryBrokerDepositFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QueryBrokerDepositFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QueryBrokerDepositFieldMessage not support this function");
    }

    CThostFtdcQueryBrokerDepositField querybrokerdepositfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QueryBrokerDepositFieldMessage const& aQueryBrokerDepositFieldMessage)
{
    os <<std::endl;
    os <<"## QueryBrokerDepositFieldMessage ##" <<std::endl;
    os <<aQueryBrokerDepositFieldMessage.querybrokerdepositfieldmessage_; 
    os <<"## end QueryBrokerDepositFieldMessage ##" <<std::endl;
}

class BrokerDepositFieldMessage : public FieldMessage
{
  public:
    BrokerDepositFieldMessage(const CThostFtdcBrokerDepositField* brokerdepositfieldmessage):
      type_(BROKERDEPOSITFIELDMESSAGE)
    {
      memset(&brokerdepositfieldmessage_, 0x0, sizeof(brokerdepositfieldmessage_));

      if( brokerdepositfieldmessage )
      {
        memcpy(&brokerdepositfieldmessage_, brokerdepositfieldmessage, sizeof(brokerdepositfieldmessage_));
      }
    }

    virtual ~BrokerDepositFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerDepositFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerDepositFieldMessage not support this function");
    }

    CThostFtdcBrokerDepositField brokerdepositfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerDepositFieldMessage const& aBrokerDepositFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerDepositFieldMessage ##" <<std::endl;
    os <<aBrokerDepositFieldMessage.brokerdepositfieldmessage_; 
    os <<"## end BrokerDepositFieldMessage ##" <<std::endl;
}

class QryCFMMCBrokerKeyFieldMessage : public FieldMessage
{
  public:
    QryCFMMCBrokerKeyFieldMessage(const CThostFtdcQryCFMMCBrokerKeyField* qrycfmmcbrokerkeyfieldmessage):
      type_(QRYCFMMCBROKERKEYFIELDMESSAGE)
    {
      memset(&qrycfmmcbrokerkeyfieldmessage_, 0x0, sizeof(qrycfmmcbrokerkeyfieldmessage_));

      if( qrycfmmcbrokerkeyfieldmessage )
      {
        memcpy(&qrycfmmcbrokerkeyfieldmessage_, qrycfmmcbrokerkeyfieldmessage, sizeof(qrycfmmcbrokerkeyfieldmessage_));
      }
    }

    virtual ~QryCFMMCBrokerKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCFMMCBrokerKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCFMMCBrokerKeyFieldMessage not support this function");
    }

    CThostFtdcQryCFMMCBrokerKeyField qrycfmmcbrokerkeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCFMMCBrokerKeyFieldMessage const& aQryCFMMCBrokerKeyFieldMessage)
{
    os <<std::endl;
    os <<"## QryCFMMCBrokerKeyFieldMessage ##" <<std::endl;
    os <<aQryCFMMCBrokerKeyFieldMessage.qrycfmmcbrokerkeyfieldmessage_; 
    os <<"## end QryCFMMCBrokerKeyFieldMessage ##" <<std::endl;
}

class CFMMCBrokerKeyFieldMessage : public FieldMessage
{
  public:
    CFMMCBrokerKeyFieldMessage(const CThostFtdcCFMMCBrokerKeyField* cfmmcbrokerkeyfieldmessage):
      type_(CFMMCBROKERKEYFIELDMESSAGE)
    {
      memset(&cfmmcbrokerkeyfieldmessage_, 0x0, sizeof(cfmmcbrokerkeyfieldmessage_));

      if( cfmmcbrokerkeyfieldmessage )
      {
        memcpy(&cfmmcbrokerkeyfieldmessage_, cfmmcbrokerkeyfieldmessage, sizeof(cfmmcbrokerkeyfieldmessage_));
      }
    }

    virtual ~CFMMCBrokerKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CFMMCBrokerKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CFMMCBrokerKeyFieldMessage not support this function");
    }

    CThostFtdcCFMMCBrokerKeyField cfmmcbrokerkeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CFMMCBrokerKeyFieldMessage const& aCFMMCBrokerKeyFieldMessage)
{
    os <<std::endl;
    os <<"## CFMMCBrokerKeyFieldMessage ##" <<std::endl;
    os <<aCFMMCBrokerKeyFieldMessage.cfmmcbrokerkeyfieldmessage_; 
    os <<"## end CFMMCBrokerKeyFieldMessage ##" <<std::endl;
}

class CFMMCTradingAccountKeyFieldMessage : public FieldMessage
{
  public:
    CFMMCTradingAccountKeyFieldMessage(const CThostFtdcCFMMCTradingAccountKeyField* cfmmctradingaccountkeyfieldmessage):
      type_(CFMMCTRADINGACCOUNTKEYFIELDMESSAGE)
    {
      memset(&cfmmctradingaccountkeyfieldmessage_, 0x0, sizeof(cfmmctradingaccountkeyfieldmessage_));

      if( cfmmctradingaccountkeyfieldmessage )
      {
        memcpy(&cfmmctradingaccountkeyfieldmessage_, cfmmctradingaccountkeyfieldmessage, sizeof(cfmmctradingaccountkeyfieldmessage_));
      }
    }

    virtual ~CFMMCTradingAccountKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CFMMCTradingAccountKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CFMMCTradingAccountKeyFieldMessage not support this function");
    }

    CThostFtdcCFMMCTradingAccountKeyField cfmmctradingaccountkeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CFMMCTradingAccountKeyFieldMessage const& aCFMMCTradingAccountKeyFieldMessage)
{
    os <<std::endl;
    os <<"## CFMMCTradingAccountKeyFieldMessage ##" <<std::endl;
    os <<aCFMMCTradingAccountKeyFieldMessage.cfmmctradingaccountkeyfieldmessage_; 
    os <<"## end CFMMCTradingAccountKeyFieldMessage ##" <<std::endl;
}

class QryCFMMCTradingAccountKeyFieldMessage : public FieldMessage
{
  public:
    QryCFMMCTradingAccountKeyFieldMessage(const CThostFtdcQryCFMMCTradingAccountKeyField* qrycfmmctradingaccountkeyfieldmessage):
      type_(QRYCFMMCTRADINGACCOUNTKEYFIELDMESSAGE)
    {
      memset(&qrycfmmctradingaccountkeyfieldmessage_, 0x0, sizeof(qrycfmmctradingaccountkeyfieldmessage_));

      if( qrycfmmctradingaccountkeyfieldmessage )
      {
        memcpy(&qrycfmmctradingaccountkeyfieldmessage_, qrycfmmctradingaccountkeyfieldmessage, sizeof(qrycfmmctradingaccountkeyfieldmessage_));
      }
    }

    virtual ~QryCFMMCTradingAccountKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCFMMCTradingAccountKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCFMMCTradingAccountKeyFieldMessage not support this function");
    }

    CThostFtdcQryCFMMCTradingAccountKeyField qrycfmmctradingaccountkeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCFMMCTradingAccountKeyFieldMessage const& aQryCFMMCTradingAccountKeyFieldMessage)
{
    os <<std::endl;
    os <<"## QryCFMMCTradingAccountKeyFieldMessage ##" <<std::endl;
    os <<aQryCFMMCTradingAccountKeyFieldMessage.qrycfmmctradingaccountkeyfieldmessage_; 
    os <<"## end QryCFMMCTradingAccountKeyFieldMessage ##" <<std::endl;
}

class BrokerUserOTPParamFieldMessage : public FieldMessage
{
  public:
    BrokerUserOTPParamFieldMessage(const CThostFtdcBrokerUserOTPParamField* brokeruserotpparamfieldmessage):
      type_(BROKERUSEROTPPARAMFIELDMESSAGE)
    {
      memset(&brokeruserotpparamfieldmessage_, 0x0, sizeof(brokeruserotpparamfieldmessage_));

      if( brokeruserotpparamfieldmessage )
      {
        memcpy(&brokeruserotpparamfieldmessage_, brokeruserotpparamfieldmessage, sizeof(brokeruserotpparamfieldmessage_));
      }
    }

    virtual ~BrokerUserOTPParamFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserOTPParamFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserOTPParamFieldMessage not support this function");
    }

    CThostFtdcBrokerUserOTPParamField brokeruserotpparamfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserOTPParamFieldMessage const& aBrokerUserOTPParamFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserOTPParamFieldMessage ##" <<std::endl;
    os <<aBrokerUserOTPParamFieldMessage.brokeruserotpparamfieldmessage_; 
    os <<"## end BrokerUserOTPParamFieldMessage ##" <<std::endl;
}

class ManualSyncBrokerUserOTPFieldMessage : public FieldMessage
{
  public:
    ManualSyncBrokerUserOTPFieldMessage(const CThostFtdcManualSyncBrokerUserOTPField* manualsyncbrokeruserotpfieldmessage):
      type_(MANUALSYNCBROKERUSEROTPFIELDMESSAGE)
    {
      memset(&manualsyncbrokeruserotpfieldmessage_, 0x0, sizeof(manualsyncbrokeruserotpfieldmessage_));

      if( manualsyncbrokeruserotpfieldmessage )
      {
        memcpy(&manualsyncbrokeruserotpfieldmessage_, manualsyncbrokeruserotpfieldmessage, sizeof(manualsyncbrokeruserotpfieldmessage_));
      }
    }

    virtual ~ManualSyncBrokerUserOTPFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ManualSyncBrokerUserOTPFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ManualSyncBrokerUserOTPFieldMessage not support this function");
    }

    CThostFtdcManualSyncBrokerUserOTPField manualsyncbrokeruserotpfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ManualSyncBrokerUserOTPFieldMessage const& aManualSyncBrokerUserOTPFieldMessage)
{
    os <<std::endl;
    os <<"## ManualSyncBrokerUserOTPFieldMessage ##" <<std::endl;
    os <<aManualSyncBrokerUserOTPFieldMessage.manualsyncbrokeruserotpfieldmessage_; 
    os <<"## end ManualSyncBrokerUserOTPFieldMessage ##" <<std::endl;
}

class CommRateModelFieldMessage : public FieldMessage
{
  public:
    CommRateModelFieldMessage(const CThostFtdcCommRateModelField* commratemodelfieldmessage):
      type_(COMMRATEMODELFIELDMESSAGE)
    {
      memset(&commratemodelfieldmessage_, 0x0, sizeof(commratemodelfieldmessage_));

      if( commratemodelfieldmessage )
      {
        memcpy(&commratemodelfieldmessage_, commratemodelfieldmessage, sizeof(commratemodelfieldmessage_));
      }
    }

    virtual ~CommRateModelFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CommRateModelFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CommRateModelFieldMessage not support this function");
    }

    CThostFtdcCommRateModelField commratemodelfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CommRateModelFieldMessage const& aCommRateModelFieldMessage)
{
    os <<std::endl;
    os <<"## CommRateModelFieldMessage ##" <<std::endl;
    os <<aCommRateModelFieldMessage.commratemodelfieldmessage_; 
    os <<"## end CommRateModelFieldMessage ##" <<std::endl;
}

class QryCommRateModelFieldMessage : public FieldMessage
{
  public:
    QryCommRateModelFieldMessage(const CThostFtdcQryCommRateModelField* qrycommratemodelfieldmessage):
      type_(QRYCOMMRATEMODELFIELDMESSAGE)
    {
      memset(&qrycommratemodelfieldmessage_, 0x0, sizeof(qrycommratemodelfieldmessage_));

      if( qrycommratemodelfieldmessage )
      {
        memcpy(&qrycommratemodelfieldmessage_, qrycommratemodelfieldmessage, sizeof(qrycommratemodelfieldmessage_));
      }
    }

    virtual ~QryCommRateModelFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryCommRateModelFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryCommRateModelFieldMessage not support this function");
    }

    CThostFtdcQryCommRateModelField qrycommratemodelfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryCommRateModelFieldMessage const& aQryCommRateModelFieldMessage)
{
    os <<std::endl;
    os <<"## QryCommRateModelFieldMessage ##" <<std::endl;
    os <<aQryCommRateModelFieldMessage.qrycommratemodelfieldmessage_; 
    os <<"## end QryCommRateModelFieldMessage ##" <<std::endl;
}

class MarginModelFieldMessage : public FieldMessage
{
  public:
    MarginModelFieldMessage(const CThostFtdcMarginModelField* marginmodelfieldmessage):
      type_(MARGINMODELFIELDMESSAGE)
    {
      memset(&marginmodelfieldmessage_, 0x0, sizeof(marginmodelfieldmessage_));

      if( marginmodelfieldmessage )
      {
        memcpy(&marginmodelfieldmessage_, marginmodelfieldmessage, sizeof(marginmodelfieldmessage_));
      }
    }

    virtual ~MarginModelFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MarginModelFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MarginModelFieldMessage not support this function");
    }

    CThostFtdcMarginModelField marginmodelfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MarginModelFieldMessage const& aMarginModelFieldMessage)
{
    os <<std::endl;
    os <<"## MarginModelFieldMessage ##" <<std::endl;
    os <<aMarginModelFieldMessage.marginmodelfieldmessage_; 
    os <<"## end MarginModelFieldMessage ##" <<std::endl;
}

class QryMarginModelFieldMessage : public FieldMessage
{
  public:
    QryMarginModelFieldMessage(const CThostFtdcQryMarginModelField* qrymarginmodelfieldmessage):
      type_(QRYMARGINMODELFIELDMESSAGE)
    {
      memset(&qrymarginmodelfieldmessage_, 0x0, sizeof(qrymarginmodelfieldmessage_));

      if( qrymarginmodelfieldmessage )
      {
        memcpy(&qrymarginmodelfieldmessage_, qrymarginmodelfieldmessage, sizeof(qrymarginmodelfieldmessage_));
      }
    }

    virtual ~QryMarginModelFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryMarginModelFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryMarginModelFieldMessage not support this function");
    }

    CThostFtdcQryMarginModelField qrymarginmodelfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryMarginModelFieldMessage const& aQryMarginModelFieldMessage)
{
    os <<std::endl;
    os <<"## QryMarginModelFieldMessage ##" <<std::endl;
    os <<aQryMarginModelFieldMessage.qrymarginmodelfieldmessage_; 
    os <<"## end QryMarginModelFieldMessage ##" <<std::endl;
}

class EWarrantOffsetFieldMessage : public FieldMessage
{
  public:
    EWarrantOffsetFieldMessage(const CThostFtdcEWarrantOffsetField* ewarrantoffsetfieldmessage):
      type_(EWARRANTOFFSETFIELDMESSAGE)
    {
      memset(&ewarrantoffsetfieldmessage_, 0x0, sizeof(ewarrantoffsetfieldmessage_));

      if( ewarrantoffsetfieldmessage )
      {
        memcpy(&ewarrantoffsetfieldmessage_, ewarrantoffsetfieldmessage, sizeof(ewarrantoffsetfieldmessage_));
      }
    }

    virtual ~EWarrantOffsetFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type EWarrantOffsetFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type EWarrantOffsetFieldMessage not support this function");
    }

    CThostFtdcEWarrantOffsetField ewarrantoffsetfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EWarrantOffsetFieldMessage const& aEWarrantOffsetFieldMessage)
{
    os <<std::endl;
    os <<"## EWarrantOffsetFieldMessage ##" <<std::endl;
    os <<aEWarrantOffsetFieldMessage.ewarrantoffsetfieldmessage_; 
    os <<"## end EWarrantOffsetFieldMessage ##" <<std::endl;
}

class QryEWarrantOffsetFieldMessage : public FieldMessage
{
  public:
    QryEWarrantOffsetFieldMessage(const CThostFtdcQryEWarrantOffsetField* qryewarrantoffsetfieldmessage):
      type_(QRYEWARRANTOFFSETFIELDMESSAGE)
    {
      memset(&qryewarrantoffsetfieldmessage_, 0x0, sizeof(qryewarrantoffsetfieldmessage_));

      if( qryewarrantoffsetfieldmessage )
      {
        memcpy(&qryewarrantoffsetfieldmessage_, qryewarrantoffsetfieldmessage, sizeof(qryewarrantoffsetfieldmessage_));
      }
    }

    virtual ~QryEWarrantOffsetFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryEWarrantOffsetFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryEWarrantOffsetFieldMessage not support this function");
    }

    CThostFtdcQryEWarrantOffsetField qryewarrantoffsetfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryEWarrantOffsetFieldMessage const& aQryEWarrantOffsetFieldMessage)
{
    os <<std::endl;
    os <<"## QryEWarrantOffsetFieldMessage ##" <<std::endl;
    os <<aQryEWarrantOffsetFieldMessage.qryewarrantoffsetfieldmessage_; 
    os <<"## end QryEWarrantOffsetFieldMessage ##" <<std::endl;
}

class QryInvestorProductGroupMarginFieldMessage : public FieldMessage
{
  public:
    QryInvestorProductGroupMarginFieldMessage(const CThostFtdcQryInvestorProductGroupMarginField* qryinvestorproductgroupmarginfieldmessage):
      type_(QRYINVESTORPRODUCTGROUPMARGINFIELDMESSAGE)
    {
      memset(&qryinvestorproductgroupmarginfieldmessage_, 0x0, sizeof(qryinvestorproductgroupmarginfieldmessage_));

      if( qryinvestorproductgroupmarginfieldmessage )
      {
        memcpy(&qryinvestorproductgroupmarginfieldmessage_, qryinvestorproductgroupmarginfieldmessage, sizeof(qryinvestorproductgroupmarginfieldmessage_));
      }
    }

    virtual ~QryInvestorProductGroupMarginFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryInvestorProductGroupMarginFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryInvestorProductGroupMarginFieldMessage not support this function");
    }

    CThostFtdcQryInvestorProductGroupMarginField qryinvestorproductgroupmarginfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryInvestorProductGroupMarginFieldMessage const& aQryInvestorProductGroupMarginFieldMessage)
{
    os <<std::endl;
    os <<"## QryInvestorProductGroupMarginFieldMessage ##" <<std::endl;
    os <<aQryInvestorProductGroupMarginFieldMessage.qryinvestorproductgroupmarginfieldmessage_; 
    os <<"## end QryInvestorProductGroupMarginFieldMessage ##" <<std::endl;
}

class InvestorProductGroupMarginFieldMessage : public FieldMessage
{
  public:
    InvestorProductGroupMarginFieldMessage(const CThostFtdcInvestorProductGroupMarginField* investorproductgroupmarginfieldmessage):
      type_(INVESTORPRODUCTGROUPMARGINFIELDMESSAGE)
    {
      memset(&investorproductgroupmarginfieldmessage_, 0x0, sizeof(investorproductgroupmarginfieldmessage_));

      if( investorproductgroupmarginfieldmessage )
      {
        memcpy(&investorproductgroupmarginfieldmessage_, investorproductgroupmarginfieldmessage, sizeof(investorproductgroupmarginfieldmessage_));
      }
    }

    virtual ~InvestorProductGroupMarginFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InvestorProductGroupMarginFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InvestorProductGroupMarginFieldMessage not support this function");
    }

    CThostFtdcInvestorProductGroupMarginField investorproductgroupmarginfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InvestorProductGroupMarginFieldMessage const& aInvestorProductGroupMarginFieldMessage)
{
    os <<std::endl;
    os <<"## InvestorProductGroupMarginFieldMessage ##" <<std::endl;
    os <<aInvestorProductGroupMarginFieldMessage.investorproductgroupmarginfieldmessage_; 
    os <<"## end InvestorProductGroupMarginFieldMessage ##" <<std::endl;
}

class QueryCFMMCTradingAccountTokenFieldMessage : public FieldMessage
{
  public:
    QueryCFMMCTradingAccountTokenFieldMessage(const CThostFtdcQueryCFMMCTradingAccountTokenField* querycfmmctradingaccounttokenfieldmessage):
      type_(QUERYCFMMCTRADINGACCOUNTTOKENFIELDMESSAGE)
    {
      memset(&querycfmmctradingaccounttokenfieldmessage_, 0x0, sizeof(querycfmmctradingaccounttokenfieldmessage_));

      if( querycfmmctradingaccounttokenfieldmessage )
      {
        memcpy(&querycfmmctradingaccounttokenfieldmessage_, querycfmmctradingaccounttokenfieldmessage, sizeof(querycfmmctradingaccounttokenfieldmessage_));
      }
    }

    virtual ~QueryCFMMCTradingAccountTokenFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QueryCFMMCTradingAccountTokenFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QueryCFMMCTradingAccountTokenFieldMessage not support this function");
    }

    CThostFtdcQueryCFMMCTradingAccountTokenField querycfmmctradingaccounttokenfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QueryCFMMCTradingAccountTokenFieldMessage const& aQueryCFMMCTradingAccountTokenFieldMessage)
{
    os <<std::endl;
    os <<"## QueryCFMMCTradingAccountTokenFieldMessage ##" <<std::endl;
    os <<aQueryCFMMCTradingAccountTokenFieldMessage.querycfmmctradingaccounttokenfieldmessage_; 
    os <<"## end QueryCFMMCTradingAccountTokenFieldMessage ##" <<std::endl;
}

class CFMMCTradingAccountTokenFieldMessage : public FieldMessage
{
  public:
    CFMMCTradingAccountTokenFieldMessage(const CThostFtdcCFMMCTradingAccountTokenField* cfmmctradingaccounttokenfieldmessage):
      type_(CFMMCTRADINGACCOUNTTOKENFIELDMESSAGE)
    {
      memset(&cfmmctradingaccounttokenfieldmessage_, 0x0, sizeof(cfmmctradingaccounttokenfieldmessage_));

      if( cfmmctradingaccounttokenfieldmessage )
      {
        memcpy(&cfmmctradingaccounttokenfieldmessage_, cfmmctradingaccounttokenfieldmessage, sizeof(cfmmctradingaccounttokenfieldmessage_));
      }
    }

    virtual ~CFMMCTradingAccountTokenFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CFMMCTradingAccountTokenFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CFMMCTradingAccountTokenFieldMessage not support this function");
    }

    CThostFtdcCFMMCTradingAccountTokenField cfmmctradingaccounttokenfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CFMMCTradingAccountTokenFieldMessage const& aCFMMCTradingAccountTokenFieldMessage)
{
    os <<std::endl;
    os <<"## CFMMCTradingAccountTokenFieldMessage ##" <<std::endl;
    os <<aCFMMCTradingAccountTokenFieldMessage.cfmmctradingaccounttokenfieldmessage_; 
    os <<"## end CFMMCTradingAccountTokenFieldMessage ##" <<std::endl;
}

class ReqOpenAccountFieldMessage : public FieldMessage
{
  public:
    ReqOpenAccountFieldMessage(const CThostFtdcReqOpenAccountField* reqopenaccountfieldmessage):
      type_(REQOPENACCOUNTFIELDMESSAGE)
    {
      memset(&reqopenaccountfieldmessage_, 0x0, sizeof(reqopenaccountfieldmessage_));

      if( reqopenaccountfieldmessage )
      {
        memcpy(&reqopenaccountfieldmessage_, reqopenaccountfieldmessage, sizeof(reqopenaccountfieldmessage_));
      }
    }

    virtual ~ReqOpenAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqOpenAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqOpenAccountFieldMessage not support this function");
    }

    CThostFtdcReqOpenAccountField reqopenaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqOpenAccountFieldMessage const& aReqOpenAccountFieldMessage)
{
    os <<std::endl;
    os <<"## ReqOpenAccountFieldMessage ##" <<std::endl;
    os <<aReqOpenAccountFieldMessage.reqopenaccountfieldmessage_; 
    os <<"## end ReqOpenAccountFieldMessage ##" <<std::endl;
}

class ReqCancelAccountFieldMessage : public FieldMessage
{
  public:
    ReqCancelAccountFieldMessage(const CThostFtdcReqCancelAccountField* reqcancelaccountfieldmessage):
      type_(REQCANCELACCOUNTFIELDMESSAGE)
    {
      memset(&reqcancelaccountfieldmessage_, 0x0, sizeof(reqcancelaccountfieldmessage_));

      if( reqcancelaccountfieldmessage )
      {
        memcpy(&reqcancelaccountfieldmessage_, reqcancelaccountfieldmessage, sizeof(reqcancelaccountfieldmessage_));
      }
    }

    virtual ~ReqCancelAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqCancelAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqCancelAccountFieldMessage not support this function");
    }

    CThostFtdcReqCancelAccountField reqcancelaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqCancelAccountFieldMessage const& aReqCancelAccountFieldMessage)
{
    os <<std::endl;
    os <<"## ReqCancelAccountFieldMessage ##" <<std::endl;
    os <<aReqCancelAccountFieldMessage.reqcancelaccountfieldmessage_; 
    os <<"## end ReqCancelAccountFieldMessage ##" <<std::endl;
}

class ReqChangeAccountFieldMessage : public FieldMessage
{
  public:
    ReqChangeAccountFieldMessage(const CThostFtdcReqChangeAccountField* reqchangeaccountfieldmessage):
      type_(REQCHANGEACCOUNTFIELDMESSAGE)
    {
      memset(&reqchangeaccountfieldmessage_, 0x0, sizeof(reqchangeaccountfieldmessage_));

      if( reqchangeaccountfieldmessage )
      {
        memcpy(&reqchangeaccountfieldmessage_, reqchangeaccountfieldmessage, sizeof(reqchangeaccountfieldmessage_));
      }
    }

    virtual ~ReqChangeAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqChangeAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqChangeAccountFieldMessage not support this function");
    }

    CThostFtdcReqChangeAccountField reqchangeaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqChangeAccountFieldMessage const& aReqChangeAccountFieldMessage)
{
    os <<std::endl;
    os <<"## ReqChangeAccountFieldMessage ##" <<std::endl;
    os <<aReqChangeAccountFieldMessage.reqchangeaccountfieldmessage_; 
    os <<"## end ReqChangeAccountFieldMessage ##" <<std::endl;
}

class ReqTransferFieldMessage : public FieldMessage
{
  public:
    ReqTransferFieldMessage(const CThostFtdcReqTransferField* reqtransferfieldmessage):
      type_(REQTRANSFERFIELDMESSAGE)
    {
      memset(&reqtransferfieldmessage_, 0x0, sizeof(reqtransferfieldmessage_));

      if( reqtransferfieldmessage )
      {
        memcpy(&reqtransferfieldmessage_, reqtransferfieldmessage, sizeof(reqtransferfieldmessage_));
      }
    }

    virtual ~ReqTransferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqTransferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqTransferFieldMessage not support this function");
    }

    CThostFtdcReqTransferField reqtransferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqTransferFieldMessage const& aReqTransferFieldMessage)
{
    os <<std::endl;
    os <<"## ReqTransferFieldMessage ##" <<std::endl;
    os <<aReqTransferFieldMessage.reqtransferfieldmessage_; 
    os <<"## end ReqTransferFieldMessage ##" <<std::endl;
}

class RspTransferFieldMessage : public FieldMessage
{
  public:
    RspTransferFieldMessage(const CThostFtdcRspTransferField* rsptransferfieldmessage):
      type_(RSPTRANSFERFIELDMESSAGE)
    {
      memset(&rsptransferfieldmessage_, 0x0, sizeof(rsptransferfieldmessage_));

      if( rsptransferfieldmessage )
      {
        memcpy(&rsptransferfieldmessage_, rsptransferfieldmessage, sizeof(rsptransferfieldmessage_));
      }
    }

    virtual ~RspTransferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspTransferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspTransferFieldMessage not support this function");
    }

    CThostFtdcRspTransferField rsptransferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspTransferFieldMessage const& aRspTransferFieldMessage)
{
    os <<std::endl;
    os <<"## RspTransferFieldMessage ##" <<std::endl;
    os <<aRspTransferFieldMessage.rsptransferfieldmessage_; 
    os <<"## end RspTransferFieldMessage ##" <<std::endl;
}

class ReqRepealFieldMessage : public FieldMessage
{
  public:
    ReqRepealFieldMessage(const CThostFtdcReqRepealField* reqrepealfieldmessage):
      type_(REQREPEALFIELDMESSAGE)
    {
      memset(&reqrepealfieldmessage_, 0x0, sizeof(reqrepealfieldmessage_));

      if( reqrepealfieldmessage )
      {
        memcpy(&reqrepealfieldmessage_, reqrepealfieldmessage, sizeof(reqrepealfieldmessage_));
      }
    }

    virtual ~ReqRepealFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqRepealFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqRepealFieldMessage not support this function");
    }

    CThostFtdcReqRepealField reqrepealfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqRepealFieldMessage const& aReqRepealFieldMessage)
{
    os <<std::endl;
    os <<"## ReqRepealFieldMessage ##" <<std::endl;
    os <<aReqRepealFieldMessage.reqrepealfieldmessage_; 
    os <<"## end ReqRepealFieldMessage ##" <<std::endl;
}

class RspRepealFieldMessage : public FieldMessage
{
  public:
    RspRepealFieldMessage(const CThostFtdcRspRepealField* rsprepealfieldmessage):
      type_(RSPREPEALFIELDMESSAGE)
    {
      memset(&rsprepealfieldmessage_, 0x0, sizeof(rsprepealfieldmessage_));

      if( rsprepealfieldmessage )
      {
        memcpy(&rsprepealfieldmessage_, rsprepealfieldmessage, sizeof(rsprepealfieldmessage_));
      }
    }

    virtual ~RspRepealFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspRepealFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspRepealFieldMessage not support this function");
    }

    CThostFtdcRspRepealField rsprepealfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspRepealFieldMessage const& aRspRepealFieldMessage)
{
    os <<std::endl;
    os <<"## RspRepealFieldMessage ##" <<std::endl;
    os <<aRspRepealFieldMessage.rsprepealfieldmessage_; 
    os <<"## end RspRepealFieldMessage ##" <<std::endl;
}

class ReqQueryAccountFieldMessage : public FieldMessage
{
  public:
    ReqQueryAccountFieldMessage(const CThostFtdcReqQueryAccountField* reqqueryaccountfieldmessage):
      type_(REQQUERYACCOUNTFIELDMESSAGE)
    {
      memset(&reqqueryaccountfieldmessage_, 0x0, sizeof(reqqueryaccountfieldmessage_));

      if( reqqueryaccountfieldmessage )
      {
        memcpy(&reqqueryaccountfieldmessage_, reqqueryaccountfieldmessage, sizeof(reqqueryaccountfieldmessage_));
      }
    }

    virtual ~ReqQueryAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqQueryAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqQueryAccountFieldMessage not support this function");
    }

    CThostFtdcReqQueryAccountField reqqueryaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqQueryAccountFieldMessage const& aReqQueryAccountFieldMessage)
{
    os <<std::endl;
    os <<"## ReqQueryAccountFieldMessage ##" <<std::endl;
    os <<aReqQueryAccountFieldMessage.reqqueryaccountfieldmessage_; 
    os <<"## end ReqQueryAccountFieldMessage ##" <<std::endl;
}

class RspQueryAccountFieldMessage : public FieldMessage
{
  public:
    RspQueryAccountFieldMessage(const CThostFtdcRspQueryAccountField* rspqueryaccountfieldmessage):
      type_(RSPQUERYACCOUNTFIELDMESSAGE)
    {
      memset(&rspqueryaccountfieldmessage_, 0x0, sizeof(rspqueryaccountfieldmessage_));

      if( rspqueryaccountfieldmessage )
      {
        memcpy(&rspqueryaccountfieldmessage_, rspqueryaccountfieldmessage, sizeof(rspqueryaccountfieldmessage_));
      }
    }

    virtual ~RspQueryAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspQueryAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspQueryAccountFieldMessage not support this function");
    }

    CThostFtdcRspQueryAccountField rspqueryaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspQueryAccountFieldMessage const& aRspQueryAccountFieldMessage)
{
    os <<std::endl;
    os <<"## RspQueryAccountFieldMessage ##" <<std::endl;
    os <<aRspQueryAccountFieldMessage.rspqueryaccountfieldmessage_; 
    os <<"## end RspQueryAccountFieldMessage ##" <<std::endl;
}

class FutureSignIOFieldMessage : public FieldMessage
{
  public:
    FutureSignIOFieldMessage(const CThostFtdcFutureSignIOField* futuresigniofieldmessage):
      type_(FUTURESIGNIOFIELDMESSAGE)
    {
      memset(&futuresigniofieldmessage_, 0x0, sizeof(futuresigniofieldmessage_));

      if( futuresigniofieldmessage )
      {
        memcpy(&futuresigniofieldmessage_, futuresigniofieldmessage, sizeof(futuresigniofieldmessage_));
      }
    }

    virtual ~FutureSignIOFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type FutureSignIOFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type FutureSignIOFieldMessage not support this function");
    }

    CThostFtdcFutureSignIOField futuresigniofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, FutureSignIOFieldMessage const& aFutureSignIOFieldMessage)
{
    os <<std::endl;
    os <<"## FutureSignIOFieldMessage ##" <<std::endl;
    os <<aFutureSignIOFieldMessage.futuresigniofieldmessage_; 
    os <<"## end FutureSignIOFieldMessage ##" <<std::endl;
}

class RspFutureSignInFieldMessage : public FieldMessage
{
  public:
    RspFutureSignInFieldMessage(const CThostFtdcRspFutureSignInField* rspfuturesigninfieldmessage):
      type_(RSPFUTURESIGNINFIELDMESSAGE)
    {
      memset(&rspfuturesigninfieldmessage_, 0x0, sizeof(rspfuturesigninfieldmessage_));

      if( rspfuturesigninfieldmessage )
      {
        memcpy(&rspfuturesigninfieldmessage_, rspfuturesigninfieldmessage, sizeof(rspfuturesigninfieldmessage_));
      }
    }

    virtual ~RspFutureSignInFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspFutureSignInFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspFutureSignInFieldMessage not support this function");
    }

    CThostFtdcRspFutureSignInField rspfuturesigninfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspFutureSignInFieldMessage const& aRspFutureSignInFieldMessage)
{
    os <<std::endl;
    os <<"## RspFutureSignInFieldMessage ##" <<std::endl;
    os <<aRspFutureSignInFieldMessage.rspfuturesigninfieldmessage_; 
    os <<"## end RspFutureSignInFieldMessage ##" <<std::endl;
}

class ReqFutureSignOutFieldMessage : public FieldMessage
{
  public:
    ReqFutureSignOutFieldMessage(const CThostFtdcReqFutureSignOutField* reqfuturesignoutfieldmessage):
      type_(REQFUTURESIGNOUTFIELDMESSAGE)
    {
      memset(&reqfuturesignoutfieldmessage_, 0x0, sizeof(reqfuturesignoutfieldmessage_));

      if( reqfuturesignoutfieldmessage )
      {
        memcpy(&reqfuturesignoutfieldmessage_, reqfuturesignoutfieldmessage, sizeof(reqfuturesignoutfieldmessage_));
      }
    }

    virtual ~ReqFutureSignOutFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqFutureSignOutFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqFutureSignOutFieldMessage not support this function");
    }

    CThostFtdcReqFutureSignOutField reqfuturesignoutfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqFutureSignOutFieldMessage const& aReqFutureSignOutFieldMessage)
{
    os <<std::endl;
    os <<"## ReqFutureSignOutFieldMessage ##" <<std::endl;
    os <<aReqFutureSignOutFieldMessage.reqfuturesignoutfieldmessage_; 
    os <<"## end ReqFutureSignOutFieldMessage ##" <<std::endl;
}

class RspFutureSignOutFieldMessage : public FieldMessage
{
  public:
    RspFutureSignOutFieldMessage(const CThostFtdcRspFutureSignOutField* rspfuturesignoutfieldmessage):
      type_(RSPFUTURESIGNOUTFIELDMESSAGE)
    {
      memset(&rspfuturesignoutfieldmessage_, 0x0, sizeof(rspfuturesignoutfieldmessage_));

      if( rspfuturesignoutfieldmessage )
      {
        memcpy(&rspfuturesignoutfieldmessage_, rspfuturesignoutfieldmessage, sizeof(rspfuturesignoutfieldmessage_));
      }
    }

    virtual ~RspFutureSignOutFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspFutureSignOutFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspFutureSignOutFieldMessage not support this function");
    }

    CThostFtdcRspFutureSignOutField rspfuturesignoutfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspFutureSignOutFieldMessage const& aRspFutureSignOutFieldMessage)
{
    os <<std::endl;
    os <<"## RspFutureSignOutFieldMessage ##" <<std::endl;
    os <<aRspFutureSignOutFieldMessage.rspfuturesignoutfieldmessage_; 
    os <<"## end RspFutureSignOutFieldMessage ##" <<std::endl;
}

class ReqQueryTradeResultBySerialFieldMessage : public FieldMessage
{
  public:
    ReqQueryTradeResultBySerialFieldMessage(const CThostFtdcReqQueryTradeResultBySerialField* reqquerytraderesultbyserialfieldmessage):
      type_(REQQUERYTRADERESULTBYSERIALFIELDMESSAGE)
    {
      memset(&reqquerytraderesultbyserialfieldmessage_, 0x0, sizeof(reqquerytraderesultbyserialfieldmessage_));

      if( reqquerytraderesultbyserialfieldmessage )
      {
        memcpy(&reqquerytraderesultbyserialfieldmessage_, reqquerytraderesultbyserialfieldmessage, sizeof(reqquerytraderesultbyserialfieldmessage_));
      }
    }

    virtual ~ReqQueryTradeResultBySerialFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqQueryTradeResultBySerialFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqQueryTradeResultBySerialFieldMessage not support this function");
    }

    CThostFtdcReqQueryTradeResultBySerialField reqquerytraderesultbyserialfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqQueryTradeResultBySerialFieldMessage const& aReqQueryTradeResultBySerialFieldMessage)
{
    os <<std::endl;
    os <<"## ReqQueryTradeResultBySerialFieldMessage ##" <<std::endl;
    os <<aReqQueryTradeResultBySerialFieldMessage.reqquerytraderesultbyserialfieldmessage_; 
    os <<"## end ReqQueryTradeResultBySerialFieldMessage ##" <<std::endl;
}

class RspQueryTradeResultBySerialFieldMessage : public FieldMessage
{
  public:
    RspQueryTradeResultBySerialFieldMessage(const CThostFtdcRspQueryTradeResultBySerialField* rspquerytraderesultbyserialfieldmessage):
      type_(RSPQUERYTRADERESULTBYSERIALFIELDMESSAGE)
    {
      memset(&rspquerytraderesultbyserialfieldmessage_, 0x0, sizeof(rspquerytraderesultbyserialfieldmessage_));

      if( rspquerytraderesultbyserialfieldmessage )
      {
        memcpy(&rspquerytraderesultbyserialfieldmessage_, rspquerytraderesultbyserialfieldmessage, sizeof(rspquerytraderesultbyserialfieldmessage_));
      }
    }

    virtual ~RspQueryTradeResultBySerialFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspQueryTradeResultBySerialFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspQueryTradeResultBySerialFieldMessage not support this function");
    }

    CThostFtdcRspQueryTradeResultBySerialField rspquerytraderesultbyserialfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspQueryTradeResultBySerialFieldMessage const& aRspQueryTradeResultBySerialFieldMessage)
{
    os <<std::endl;
    os <<"## RspQueryTradeResultBySerialFieldMessage ##" <<std::endl;
    os <<aRspQueryTradeResultBySerialFieldMessage.rspquerytraderesultbyserialfieldmessage_; 
    os <<"## end RspQueryTradeResultBySerialFieldMessage ##" <<std::endl;
}

class ReqDayEndFileReadyFieldMessage : public FieldMessage
{
  public:
    ReqDayEndFileReadyFieldMessage(const CThostFtdcReqDayEndFileReadyField* reqdayendfilereadyfieldmessage):
      type_(REQDAYENDFILEREADYFIELDMESSAGE)
    {
      memset(&reqdayendfilereadyfieldmessage_, 0x0, sizeof(reqdayendfilereadyfieldmessage_));

      if( reqdayendfilereadyfieldmessage )
      {
        memcpy(&reqdayendfilereadyfieldmessage_, reqdayendfilereadyfieldmessage, sizeof(reqdayendfilereadyfieldmessage_));
      }
    }

    virtual ~ReqDayEndFileReadyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqDayEndFileReadyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqDayEndFileReadyFieldMessage not support this function");
    }

    CThostFtdcReqDayEndFileReadyField reqdayendfilereadyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqDayEndFileReadyFieldMessage const& aReqDayEndFileReadyFieldMessage)
{
    os <<std::endl;
    os <<"## ReqDayEndFileReadyFieldMessage ##" <<std::endl;
    os <<aReqDayEndFileReadyFieldMessage.reqdayendfilereadyfieldmessage_; 
    os <<"## end ReqDayEndFileReadyFieldMessage ##" <<std::endl;
}

class ReturnResultFieldMessage : public FieldMessage
{
  public:
    ReturnResultFieldMessage(const CThostFtdcReturnResultField* returnresultfieldmessage):
      type_(RETURNRESULTFIELDMESSAGE)
    {
      memset(&returnresultfieldmessage_, 0x0, sizeof(returnresultfieldmessage_));

      if( returnresultfieldmessage )
      {
        memcpy(&returnresultfieldmessage_, returnresultfieldmessage, sizeof(returnresultfieldmessage_));
      }
    }

    virtual ~ReturnResultFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReturnResultFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReturnResultFieldMessage not support this function");
    }

    CThostFtdcReturnResultField returnresultfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReturnResultFieldMessage const& aReturnResultFieldMessage)
{
    os <<std::endl;
    os <<"## ReturnResultFieldMessage ##" <<std::endl;
    os <<aReturnResultFieldMessage.returnresultfieldmessage_; 
    os <<"## end ReturnResultFieldMessage ##" <<std::endl;
}

class VerifyFuturePasswordFieldMessage : public FieldMessage
{
  public:
    VerifyFuturePasswordFieldMessage(const CThostFtdcVerifyFuturePasswordField* verifyfuturepasswordfieldmessage):
      type_(VERIFYFUTUREPASSWORDFIELDMESSAGE)
    {
      memset(&verifyfuturepasswordfieldmessage_, 0x0, sizeof(verifyfuturepasswordfieldmessage_));

      if( verifyfuturepasswordfieldmessage )
      {
        memcpy(&verifyfuturepasswordfieldmessage_, verifyfuturepasswordfieldmessage, sizeof(verifyfuturepasswordfieldmessage_));
      }
    }

    virtual ~VerifyFuturePasswordFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type VerifyFuturePasswordFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type VerifyFuturePasswordFieldMessage not support this function");
    }

    CThostFtdcVerifyFuturePasswordField verifyfuturepasswordfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, VerifyFuturePasswordFieldMessage const& aVerifyFuturePasswordFieldMessage)
{
    os <<std::endl;
    os <<"## VerifyFuturePasswordFieldMessage ##" <<std::endl;
    os <<aVerifyFuturePasswordFieldMessage.verifyfuturepasswordfieldmessage_; 
    os <<"## end VerifyFuturePasswordFieldMessage ##" <<std::endl;
}

class VerifyCustInfoFieldMessage : public FieldMessage
{
  public:
    VerifyCustInfoFieldMessage(const CThostFtdcVerifyCustInfoField* verifycustinfofieldmessage):
      type_(VERIFYCUSTINFOFIELDMESSAGE)
    {
      memset(&verifycustinfofieldmessage_, 0x0, sizeof(verifycustinfofieldmessage_));

      if( verifycustinfofieldmessage )
      {
        memcpy(&verifycustinfofieldmessage_, verifycustinfofieldmessage, sizeof(verifycustinfofieldmessage_));
      }
    }

    virtual ~VerifyCustInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type VerifyCustInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type VerifyCustInfoFieldMessage not support this function");
    }

    CThostFtdcVerifyCustInfoField verifycustinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, VerifyCustInfoFieldMessage const& aVerifyCustInfoFieldMessage)
{
    os <<std::endl;
    os <<"## VerifyCustInfoFieldMessage ##" <<std::endl;
    os <<aVerifyCustInfoFieldMessage.verifycustinfofieldmessage_; 
    os <<"## end VerifyCustInfoFieldMessage ##" <<std::endl;
}

class VerifyFuturePasswordAndCustInfoFieldMessage : public FieldMessage
{
  public:
    VerifyFuturePasswordAndCustInfoFieldMessage(const CThostFtdcVerifyFuturePasswordAndCustInfoField* verifyfuturepasswordandcustinfofieldmessage):
      type_(VERIFYFUTUREPASSWORDANDCUSTINFOFIELDMESSAGE)
    {
      memset(&verifyfuturepasswordandcustinfofieldmessage_, 0x0, sizeof(verifyfuturepasswordandcustinfofieldmessage_));

      if( verifyfuturepasswordandcustinfofieldmessage )
      {
        memcpy(&verifyfuturepasswordandcustinfofieldmessage_, verifyfuturepasswordandcustinfofieldmessage, sizeof(verifyfuturepasswordandcustinfofieldmessage_));
      }
    }

    virtual ~VerifyFuturePasswordAndCustInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type VerifyFuturePasswordAndCustInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type VerifyFuturePasswordAndCustInfoFieldMessage not support this function");
    }

    CThostFtdcVerifyFuturePasswordAndCustInfoField verifyfuturepasswordandcustinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, VerifyFuturePasswordAndCustInfoFieldMessage const& aVerifyFuturePasswordAndCustInfoFieldMessage)
{
    os <<std::endl;
    os <<"## VerifyFuturePasswordAndCustInfoFieldMessage ##" <<std::endl;
    os <<aVerifyFuturePasswordAndCustInfoFieldMessage.verifyfuturepasswordandcustinfofieldmessage_; 
    os <<"## end VerifyFuturePasswordAndCustInfoFieldMessage ##" <<std::endl;
}

class DepositResultInformFieldMessage : public FieldMessage
{
  public:
    DepositResultInformFieldMessage(const CThostFtdcDepositResultInformField* depositresultinformfieldmessage):
      type_(DEPOSITRESULTINFORMFIELDMESSAGE)
    {
      memset(&depositresultinformfieldmessage_, 0x0, sizeof(depositresultinformfieldmessage_));

      if( depositresultinformfieldmessage )
      {
        memcpy(&depositresultinformfieldmessage_, depositresultinformfieldmessage, sizeof(depositresultinformfieldmessage_));
      }
    }

    virtual ~DepositResultInformFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type DepositResultInformFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type DepositResultInformFieldMessage not support this function");
    }

    CThostFtdcDepositResultInformField depositresultinformfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DepositResultInformFieldMessage const& aDepositResultInformFieldMessage)
{
    os <<std::endl;
    os <<"## DepositResultInformFieldMessage ##" <<std::endl;
    os <<aDepositResultInformFieldMessage.depositresultinformfieldmessage_; 
    os <<"## end DepositResultInformFieldMessage ##" <<std::endl;
}

class ReqSyncKeyFieldMessage : public FieldMessage
{
  public:
    ReqSyncKeyFieldMessage(const CThostFtdcReqSyncKeyField* reqsynckeyfieldmessage):
      type_(REQSYNCKEYFIELDMESSAGE)
    {
      memset(&reqsynckeyfieldmessage_, 0x0, sizeof(reqsynckeyfieldmessage_));

      if( reqsynckeyfieldmessage )
      {
        memcpy(&reqsynckeyfieldmessage_, reqsynckeyfieldmessage, sizeof(reqsynckeyfieldmessage_));
      }
    }

    virtual ~ReqSyncKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ReqSyncKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ReqSyncKeyFieldMessage not support this function");
    }

    CThostFtdcReqSyncKeyField reqsynckeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ReqSyncKeyFieldMessage const& aReqSyncKeyFieldMessage)
{
    os <<std::endl;
    os <<"## ReqSyncKeyFieldMessage ##" <<std::endl;
    os <<aReqSyncKeyFieldMessage.reqsynckeyfieldmessage_; 
    os <<"## end ReqSyncKeyFieldMessage ##" <<std::endl;
}

class RspSyncKeyFieldMessage : public FieldMessage
{
  public:
    RspSyncKeyFieldMessage(const CThostFtdcRspSyncKeyField* rspsynckeyfieldmessage):
      type_(RSPSYNCKEYFIELDMESSAGE)
    {
      memset(&rspsynckeyfieldmessage_, 0x0, sizeof(rspsynckeyfieldmessage_));

      if( rspsynckeyfieldmessage )
      {
        memcpy(&rspsynckeyfieldmessage_, rspsynckeyfieldmessage, sizeof(rspsynckeyfieldmessage_));
      }
    }

    virtual ~RspSyncKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type RspSyncKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type RspSyncKeyFieldMessage not support this function");
    }

    CThostFtdcRspSyncKeyField rspsynckeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, RspSyncKeyFieldMessage const& aRspSyncKeyFieldMessage)
{
    os <<std::endl;
    os <<"## RspSyncKeyFieldMessage ##" <<std::endl;
    os <<aRspSyncKeyFieldMessage.rspsynckeyfieldmessage_; 
    os <<"## end RspSyncKeyFieldMessage ##" <<std::endl;
}

class NotifyQueryAccountFieldMessage : public FieldMessage
{
  public:
    NotifyQueryAccountFieldMessage(const CThostFtdcNotifyQueryAccountField* notifyqueryaccountfieldmessage):
      type_(NOTIFYQUERYACCOUNTFIELDMESSAGE)
    {
      memset(&notifyqueryaccountfieldmessage_, 0x0, sizeof(notifyqueryaccountfieldmessage_));

      if( notifyqueryaccountfieldmessage )
      {
        memcpy(&notifyqueryaccountfieldmessage_, notifyqueryaccountfieldmessage, sizeof(notifyqueryaccountfieldmessage_));
      }
    }

    virtual ~NotifyQueryAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type NotifyQueryAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type NotifyQueryAccountFieldMessage not support this function");
    }

    CThostFtdcNotifyQueryAccountField notifyqueryaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, NotifyQueryAccountFieldMessage const& aNotifyQueryAccountFieldMessage)
{
    os <<std::endl;
    os <<"## NotifyQueryAccountFieldMessage ##" <<std::endl;
    os <<aNotifyQueryAccountFieldMessage.notifyqueryaccountfieldmessage_; 
    os <<"## end NotifyQueryAccountFieldMessage ##" <<std::endl;
}

class TransferSerialFieldMessage : public FieldMessage
{
  public:
    TransferSerialFieldMessage(const CThostFtdcTransferSerialField* transferserialfieldmessage):
      type_(TRANSFERSERIALFIELDMESSAGE)
    {
      memset(&transferserialfieldmessage_, 0x0, sizeof(transferserialfieldmessage_));

      if( transferserialfieldmessage )
      {
        memcpy(&transferserialfieldmessage_, transferserialfieldmessage, sizeof(transferserialfieldmessage_));
      }
    }

    virtual ~TransferSerialFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TransferSerialFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TransferSerialFieldMessage not support this function");
    }

    CThostFtdcTransferSerialField transferserialfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TransferSerialFieldMessage const& aTransferSerialFieldMessage)
{
    os <<std::endl;
    os <<"## TransferSerialFieldMessage ##" <<std::endl;
    os <<aTransferSerialFieldMessage.transferserialfieldmessage_; 
    os <<"## end TransferSerialFieldMessage ##" <<std::endl;
}

class QryTransferSerialFieldMessage : public FieldMessage
{
  public:
    QryTransferSerialFieldMessage(const CThostFtdcQryTransferSerialField* qrytransferserialfieldmessage):
      type_(QRYTRANSFERSERIALFIELDMESSAGE)
    {
      memset(&qrytransferserialfieldmessage_, 0x0, sizeof(qrytransferserialfieldmessage_));

      if( qrytransferserialfieldmessage )
      {
        memcpy(&qrytransferserialfieldmessage_, qrytransferserialfieldmessage, sizeof(qrytransferserialfieldmessage_));
      }
    }

    virtual ~QryTransferSerialFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryTransferSerialFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryTransferSerialFieldMessage not support this function");
    }

    CThostFtdcQryTransferSerialField qrytransferserialfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryTransferSerialFieldMessage const& aQryTransferSerialFieldMessage)
{
    os <<std::endl;
    os <<"## QryTransferSerialFieldMessage ##" <<std::endl;
    os <<aQryTransferSerialFieldMessage.qrytransferserialfieldmessage_; 
    os <<"## end QryTransferSerialFieldMessage ##" <<std::endl;
}

class NotifyFutureSignInFieldMessage : public FieldMessage
{
  public:
    NotifyFutureSignInFieldMessage(const CThostFtdcNotifyFutureSignInField* notifyfuturesigninfieldmessage):
      type_(NOTIFYFUTURESIGNINFIELDMESSAGE)
    {
      memset(&notifyfuturesigninfieldmessage_, 0x0, sizeof(notifyfuturesigninfieldmessage_));

      if( notifyfuturesigninfieldmessage )
      {
        memcpy(&notifyfuturesigninfieldmessage_, notifyfuturesigninfieldmessage, sizeof(notifyfuturesigninfieldmessage_));
      }
    }

    virtual ~NotifyFutureSignInFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type NotifyFutureSignInFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type NotifyFutureSignInFieldMessage not support this function");
    }

    CThostFtdcNotifyFutureSignInField notifyfuturesigninfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, NotifyFutureSignInFieldMessage const& aNotifyFutureSignInFieldMessage)
{
    os <<std::endl;
    os <<"## NotifyFutureSignInFieldMessage ##" <<std::endl;
    os <<aNotifyFutureSignInFieldMessage.notifyfuturesigninfieldmessage_; 
    os <<"## end NotifyFutureSignInFieldMessage ##" <<std::endl;
}

class NotifyFutureSignOutFieldMessage : public FieldMessage
{
  public:
    NotifyFutureSignOutFieldMessage(const CThostFtdcNotifyFutureSignOutField* notifyfuturesignoutfieldmessage):
      type_(NOTIFYFUTURESIGNOUTFIELDMESSAGE)
    {
      memset(&notifyfuturesignoutfieldmessage_, 0x0, sizeof(notifyfuturesignoutfieldmessage_));

      if( notifyfuturesignoutfieldmessage )
      {
        memcpy(&notifyfuturesignoutfieldmessage_, notifyfuturesignoutfieldmessage, sizeof(notifyfuturesignoutfieldmessage_));
      }
    }

    virtual ~NotifyFutureSignOutFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type NotifyFutureSignOutFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type NotifyFutureSignOutFieldMessage not support this function");
    }

    CThostFtdcNotifyFutureSignOutField notifyfuturesignoutfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, NotifyFutureSignOutFieldMessage const& aNotifyFutureSignOutFieldMessage)
{
    os <<std::endl;
    os <<"## NotifyFutureSignOutFieldMessage ##" <<std::endl;
    os <<aNotifyFutureSignOutFieldMessage.notifyfuturesignoutfieldmessage_; 
    os <<"## end NotifyFutureSignOutFieldMessage ##" <<std::endl;
}

class NotifySyncKeyFieldMessage : public FieldMessage
{
  public:
    NotifySyncKeyFieldMessage(const CThostFtdcNotifySyncKeyField* notifysynckeyfieldmessage):
      type_(NOTIFYSYNCKEYFIELDMESSAGE)
    {
      memset(&notifysynckeyfieldmessage_, 0x0, sizeof(notifysynckeyfieldmessage_));

      if( notifysynckeyfieldmessage )
      {
        memcpy(&notifysynckeyfieldmessage_, notifysynckeyfieldmessage, sizeof(notifysynckeyfieldmessage_));
      }
    }

    virtual ~NotifySyncKeyFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type NotifySyncKeyFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type NotifySyncKeyFieldMessage not support this function");
    }

    CThostFtdcNotifySyncKeyField notifysynckeyfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, NotifySyncKeyFieldMessage const& aNotifySyncKeyFieldMessage)
{
    os <<std::endl;
    os <<"## NotifySyncKeyFieldMessage ##" <<std::endl;
    os <<aNotifySyncKeyFieldMessage.notifysynckeyfieldmessage_; 
    os <<"## end NotifySyncKeyFieldMessage ##" <<std::endl;
}

class QryAccountregisterFieldMessage : public FieldMessage
{
  public:
    QryAccountregisterFieldMessage(const CThostFtdcQryAccountregisterField* qryaccountregisterfieldmessage):
      type_(QRYACCOUNTREGISTERFIELDMESSAGE)
    {
      memset(&qryaccountregisterfieldmessage_, 0x0, sizeof(qryaccountregisterfieldmessage_));

      if( qryaccountregisterfieldmessage )
      {
        memcpy(&qryaccountregisterfieldmessage_, qryaccountregisterfieldmessage, sizeof(qryaccountregisterfieldmessage_));
      }
    }

    virtual ~QryAccountregisterFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryAccountregisterFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryAccountregisterFieldMessage not support this function");
    }

    CThostFtdcQryAccountregisterField qryaccountregisterfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryAccountregisterFieldMessage const& aQryAccountregisterFieldMessage)
{
    os <<std::endl;
    os <<"## QryAccountregisterFieldMessage ##" <<std::endl;
    os <<aQryAccountregisterFieldMessage.qryaccountregisterfieldmessage_; 
    os <<"## end QryAccountregisterFieldMessage ##" <<std::endl;
}

class AccountregisterFieldMessage : public FieldMessage
{
  public:
    AccountregisterFieldMessage(const CThostFtdcAccountregisterField* accountregisterfieldmessage):
      type_(ACCOUNTREGISTERFIELDMESSAGE)
    {
      memset(&accountregisterfieldmessage_, 0x0, sizeof(accountregisterfieldmessage_));

      if( accountregisterfieldmessage )
      {
        memcpy(&accountregisterfieldmessage_, accountregisterfieldmessage, sizeof(accountregisterfieldmessage_));
      }
    }

    virtual ~AccountregisterFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type AccountregisterFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type AccountregisterFieldMessage not support this function");
    }

    CThostFtdcAccountregisterField accountregisterfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, AccountregisterFieldMessage const& aAccountregisterFieldMessage)
{
    os <<std::endl;
    os <<"## AccountregisterFieldMessage ##" <<std::endl;
    os <<aAccountregisterFieldMessage.accountregisterfieldmessage_; 
    os <<"## end AccountregisterFieldMessage ##" <<std::endl;
}

class OpenAccountFieldMessage : public FieldMessage
{
  public:
    OpenAccountFieldMessage(const CThostFtdcOpenAccountField* openaccountfieldmessage):
      type_(OPENACCOUNTFIELDMESSAGE)
    {
      memset(&openaccountfieldmessage_, 0x0, sizeof(openaccountfieldmessage_));

      if( openaccountfieldmessage )
      {
        memcpy(&openaccountfieldmessage_, openaccountfieldmessage, sizeof(openaccountfieldmessage_));
      }
    }

    virtual ~OpenAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type OpenAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type OpenAccountFieldMessage not support this function");
    }

    CThostFtdcOpenAccountField openaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, OpenAccountFieldMessage const& aOpenAccountFieldMessage)
{
    os <<std::endl;
    os <<"## OpenAccountFieldMessage ##" <<std::endl;
    os <<aOpenAccountFieldMessage.openaccountfieldmessage_; 
    os <<"## end OpenAccountFieldMessage ##" <<std::endl;
}

class CancelAccountFieldMessage : public FieldMessage
{
  public:
    CancelAccountFieldMessage(const CThostFtdcCancelAccountField* cancelaccountfieldmessage):
      type_(CANCELACCOUNTFIELDMESSAGE)
    {
      memset(&cancelaccountfieldmessage_, 0x0, sizeof(cancelaccountfieldmessage_));

      if( cancelaccountfieldmessage )
      {
        memcpy(&cancelaccountfieldmessage_, cancelaccountfieldmessage, sizeof(cancelaccountfieldmessage_));
      }
    }

    virtual ~CancelAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CancelAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CancelAccountFieldMessage not support this function");
    }

    CThostFtdcCancelAccountField cancelaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CancelAccountFieldMessage const& aCancelAccountFieldMessage)
{
    os <<std::endl;
    os <<"## CancelAccountFieldMessage ##" <<std::endl;
    os <<aCancelAccountFieldMessage.cancelaccountfieldmessage_; 
    os <<"## end CancelAccountFieldMessage ##" <<std::endl;
}

class ChangeAccountFieldMessage : public FieldMessage
{
  public:
    ChangeAccountFieldMessage(const CThostFtdcChangeAccountField* changeaccountfieldmessage):
      type_(CHANGEACCOUNTFIELDMESSAGE)
    {
      memset(&changeaccountfieldmessage_, 0x0, sizeof(changeaccountfieldmessage_));

      if( changeaccountfieldmessage )
      {
        memcpy(&changeaccountfieldmessage_, changeaccountfieldmessage, sizeof(changeaccountfieldmessage_));
      }
    }

    virtual ~ChangeAccountFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type ChangeAccountFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type ChangeAccountFieldMessage not support this function");
    }

    CThostFtdcChangeAccountField changeaccountfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, ChangeAccountFieldMessage const& aChangeAccountFieldMessage)
{
    os <<std::endl;
    os <<"## ChangeAccountFieldMessage ##" <<std::endl;
    os <<aChangeAccountFieldMessage.changeaccountfieldmessage_; 
    os <<"## end ChangeAccountFieldMessage ##" <<std::endl;
}

class SecAgentACIDMapFieldMessage : public FieldMessage
{
  public:
    SecAgentACIDMapFieldMessage(const CThostFtdcSecAgentACIDMapField* secagentacidmapfieldmessage):
      type_(SECAGENTACIDMAPFIELDMESSAGE)
    {
      memset(&secagentacidmapfieldmessage_, 0x0, sizeof(secagentacidmapfieldmessage_));

      if( secagentacidmapfieldmessage )
      {
        memcpy(&secagentacidmapfieldmessage_, secagentacidmapfieldmessage, sizeof(secagentacidmapfieldmessage_));
      }
    }

    virtual ~SecAgentACIDMapFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type SecAgentACIDMapFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type SecAgentACIDMapFieldMessage not support this function");
    }

    CThostFtdcSecAgentACIDMapField secagentacidmapfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, SecAgentACIDMapFieldMessage const& aSecAgentACIDMapFieldMessage)
{
    os <<std::endl;
    os <<"## SecAgentACIDMapFieldMessage ##" <<std::endl;
    os <<aSecAgentACIDMapFieldMessage.secagentacidmapfieldmessage_; 
    os <<"## end SecAgentACIDMapFieldMessage ##" <<std::endl;
}

class QrySecAgentACIDMapFieldMessage : public FieldMessage
{
  public:
    QrySecAgentACIDMapFieldMessage(const CThostFtdcQrySecAgentACIDMapField* qrysecagentacidmapfieldmessage):
      type_(QRYSECAGENTACIDMAPFIELDMESSAGE)
    {
      memset(&qrysecagentacidmapfieldmessage_, 0x0, sizeof(qrysecagentacidmapfieldmessage_));

      if( qrysecagentacidmapfieldmessage )
      {
        memcpy(&qrysecagentacidmapfieldmessage_, qrysecagentacidmapfieldmessage, sizeof(qrysecagentacidmapfieldmessage_));
      }
    }

    virtual ~QrySecAgentACIDMapFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QrySecAgentACIDMapFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QrySecAgentACIDMapFieldMessage not support this function");
    }

    CThostFtdcQrySecAgentACIDMapField qrysecagentacidmapfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QrySecAgentACIDMapFieldMessage const& aQrySecAgentACIDMapFieldMessage)
{
    os <<std::endl;
    os <<"## QrySecAgentACIDMapFieldMessage ##" <<std::endl;
    os <<aQrySecAgentACIDMapFieldMessage.qrysecagentacidmapfieldmessage_; 
    os <<"## end QrySecAgentACIDMapFieldMessage ##" <<std::endl;
}

class UserRightsAssignFieldMessage : public FieldMessage
{
  public:
    UserRightsAssignFieldMessage(const CThostFtdcUserRightsAssignField* userrightsassignfieldmessage):
      type_(USERRIGHTSASSIGNFIELDMESSAGE)
    {
      memset(&userrightsassignfieldmessage_, 0x0, sizeof(userrightsassignfieldmessage_));

      if( userrightsassignfieldmessage )
      {
        memcpy(&userrightsassignfieldmessage_, userrightsassignfieldmessage, sizeof(userrightsassignfieldmessage_));
      }
    }

    virtual ~UserRightsAssignFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type UserRightsAssignFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type UserRightsAssignFieldMessage not support this function");
    }

    CThostFtdcUserRightsAssignField userrightsassignfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, UserRightsAssignFieldMessage const& aUserRightsAssignFieldMessage)
{
    os <<std::endl;
    os <<"## UserRightsAssignFieldMessage ##" <<std::endl;
    os <<aUserRightsAssignFieldMessage.userrightsassignfieldmessage_; 
    os <<"## end UserRightsAssignFieldMessage ##" <<std::endl;
}

class BrokerUserRightAssignFieldMessage : public FieldMessage
{
  public:
    BrokerUserRightAssignFieldMessage(const CThostFtdcBrokerUserRightAssignField* brokeruserrightassignfieldmessage):
      type_(BROKERUSERRIGHTASSIGNFIELDMESSAGE)
    {
      memset(&brokeruserrightassignfieldmessage_, 0x0, sizeof(brokeruserrightassignfieldmessage_));

      if( brokeruserrightassignfieldmessage )
      {
        memcpy(&brokeruserrightassignfieldmessage_, brokeruserrightassignfieldmessage, sizeof(brokeruserrightassignfieldmessage_));
      }
    }

    virtual ~BrokerUserRightAssignFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type BrokerUserRightAssignFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type BrokerUserRightAssignFieldMessage not support this function");
    }

    CThostFtdcBrokerUserRightAssignField brokeruserrightassignfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, BrokerUserRightAssignFieldMessage const& aBrokerUserRightAssignFieldMessage)
{
    os <<std::endl;
    os <<"## BrokerUserRightAssignFieldMessage ##" <<std::endl;
    os <<aBrokerUserRightAssignFieldMessage.brokeruserrightassignfieldmessage_; 
    os <<"## end BrokerUserRightAssignFieldMessage ##" <<std::endl;
}

class DRTransferFieldMessage : public FieldMessage
{
  public:
    DRTransferFieldMessage(const CThostFtdcDRTransferField* drtransferfieldmessage):
      type_(DRTRANSFERFIELDMESSAGE)
    {
      memset(&drtransferfieldmessage_, 0x0, sizeof(drtransferfieldmessage_));

      if( drtransferfieldmessage )
      {
        memcpy(&drtransferfieldmessage_, drtransferfieldmessage, sizeof(drtransferfieldmessage_));
      }
    }

    virtual ~DRTransferFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type DRTransferFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type DRTransferFieldMessage not support this function");
    }

    CThostFtdcDRTransferField drtransferfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DRTransferFieldMessage const& aDRTransferFieldMessage)
{
    os <<std::endl;
    os <<"## DRTransferFieldMessage ##" <<std::endl;
    os <<aDRTransferFieldMessage.drtransferfieldmessage_; 
    os <<"## end DRTransferFieldMessage ##" <<std::endl;
}

class FensUserInfoFieldMessage : public FieldMessage
{
  public:
    FensUserInfoFieldMessage(const CThostFtdcFensUserInfoField* fensuserinfofieldmessage):
      type_(FENSUSERINFOFIELDMESSAGE)
    {
      memset(&fensuserinfofieldmessage_, 0x0, sizeof(fensuserinfofieldmessage_));

      if( fensuserinfofieldmessage )
      {
        memcpy(&fensuserinfofieldmessage_, fensuserinfofieldmessage, sizeof(fensuserinfofieldmessage_));
      }
    }

    virtual ~FensUserInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type FensUserInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type FensUserInfoFieldMessage not support this function");
    }

    CThostFtdcFensUserInfoField fensuserinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, FensUserInfoFieldMessage const& aFensUserInfoFieldMessage)
{
    os <<std::endl;
    os <<"## FensUserInfoFieldMessage ##" <<std::endl;
    os <<aFensUserInfoFieldMessage.fensuserinfofieldmessage_; 
    os <<"## end FensUserInfoFieldMessage ##" <<std::endl;
}

class CurrTransferIdentityFieldMessage : public FieldMessage
{
  public:
    CurrTransferIdentityFieldMessage(const CThostFtdcCurrTransferIdentityField* currtransferidentityfieldmessage):
      type_(CURRTRANSFERIDENTITYFIELDMESSAGE)
    {
      memset(&currtransferidentityfieldmessage_, 0x0, sizeof(currtransferidentityfieldmessage_));

      if( currtransferidentityfieldmessage )
      {
        memcpy(&currtransferidentityfieldmessage_, currtransferidentityfieldmessage, sizeof(currtransferidentityfieldmessage_));
      }
    }

    virtual ~CurrTransferIdentityFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type CurrTransferIdentityFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type CurrTransferIdentityFieldMessage not support this function");
    }

    CThostFtdcCurrTransferIdentityField currtransferidentityfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CurrTransferIdentityFieldMessage const& aCurrTransferIdentityFieldMessage)
{
    os <<std::endl;
    os <<"## CurrTransferIdentityFieldMessage ##" <<std::endl;
    os <<aCurrTransferIdentityFieldMessage.currtransferidentityfieldmessage_; 
    os <<"## end CurrTransferIdentityFieldMessage ##" <<std::endl;
}

class LoginForbiddenUserFieldMessage : public FieldMessage
{
  public:
    LoginForbiddenUserFieldMessage(const CThostFtdcLoginForbiddenUserField* loginforbiddenuserfieldmessage):
      type_(LOGINFORBIDDENUSERFIELDMESSAGE)
    {
      memset(&loginforbiddenuserfieldmessage_, 0x0, sizeof(loginforbiddenuserfieldmessage_));

      if( loginforbiddenuserfieldmessage )
      {
        memcpy(&loginforbiddenuserfieldmessage_, loginforbiddenuserfieldmessage, sizeof(loginforbiddenuserfieldmessage_));
      }
    }

    virtual ~LoginForbiddenUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type LoginForbiddenUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type LoginForbiddenUserFieldMessage not support this function");
    }

    CThostFtdcLoginForbiddenUserField loginforbiddenuserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, LoginForbiddenUserFieldMessage const& aLoginForbiddenUserFieldMessage)
{
    os <<std::endl;
    os <<"## LoginForbiddenUserFieldMessage ##" <<std::endl;
    os <<aLoginForbiddenUserFieldMessage.loginforbiddenuserfieldmessage_; 
    os <<"## end LoginForbiddenUserFieldMessage ##" <<std::endl;
}

class QryLoginForbiddenUserFieldMessage : public FieldMessage
{
  public:
    QryLoginForbiddenUserFieldMessage(const CThostFtdcQryLoginForbiddenUserField* qryloginforbiddenuserfieldmessage):
      type_(QRYLOGINFORBIDDENUSERFIELDMESSAGE)
    {
      memset(&qryloginforbiddenuserfieldmessage_, 0x0, sizeof(qryloginforbiddenuserfieldmessage_));

      if( qryloginforbiddenuserfieldmessage )
      {
        memcpy(&qryloginforbiddenuserfieldmessage_, qryloginforbiddenuserfieldmessage, sizeof(qryloginforbiddenuserfieldmessage_));
      }
    }

    virtual ~QryLoginForbiddenUserFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type QryLoginForbiddenUserFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type QryLoginForbiddenUserFieldMessage not support this function");
    }

    CThostFtdcQryLoginForbiddenUserField qryloginforbiddenuserfieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, QryLoginForbiddenUserFieldMessage const& aQryLoginForbiddenUserFieldMessage)
{
    os <<std::endl;
    os <<"## QryLoginForbiddenUserFieldMessage ##" <<std::endl;
    os <<aQryLoginForbiddenUserFieldMessage.qryloginforbiddenuserfieldmessage_; 
    os <<"## end QryLoginForbiddenUserFieldMessage ##" <<std::endl;
}

class MulticastGroupInfoFieldMessage : public FieldMessage
{
  public:
    MulticastGroupInfoFieldMessage(const CThostFtdcMulticastGroupInfoField* multicastgroupinfofieldmessage):
      type_(MULTICASTGROUPINFOFIELDMESSAGE)
    {
      memset(&multicastgroupinfofieldmessage_, 0x0, sizeof(multicastgroupinfofieldmessage_));

      if( multicastgroupinfofieldmessage )
      {
        memcpy(&multicastgroupinfofieldmessage_, multicastgroupinfofieldmessage, sizeof(multicastgroupinfofieldmessage_));
      }
    }

    virtual ~MulticastGroupInfoFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type MulticastGroupInfoFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type MulticastGroupInfoFieldMessage not support this function");
    }

    CThostFtdcMulticastGroupInfoField multicastgroupinfofieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, MulticastGroupInfoFieldMessage const& aMulticastGroupInfoFieldMessage)
{
    os <<std::endl;
    os <<"## MulticastGroupInfoFieldMessage ##" <<std::endl;
    os <<aMulticastGroupInfoFieldMessage.multicastgroupinfofieldmessage_; 
    os <<"## end MulticastGroupInfoFieldMessage ##" <<std::endl;
}

class TradingAccountReserveFieldMessage : public FieldMessage
{
  public:
    TradingAccountReserveFieldMessage(const CThostFtdcTradingAccountReserveField* tradingaccountreservefieldmessage):
      type_(TRADINGACCOUNTRESERVEFIELDMESSAGE)
    {
      memset(&tradingaccountreservefieldmessage_, 0x0, sizeof(tradingaccountreservefieldmessage_));

      if( tradingaccountreservefieldmessage )
      {
        memcpy(&tradingaccountreservefieldmessage_, tradingaccountreservefieldmessage, sizeof(tradingaccountreservefieldmessage_));
      }
    }

    virtual ~TradingAccountReserveFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type TradingAccountReserveFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type TradingAccountReserveFieldMessage not support this function");
    }

    CThostFtdcTradingAccountReserveField tradingaccountreservefieldmessage_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, TradingAccountReserveFieldMessage const& aTradingAccountReserveFieldMessage)
{
    os <<std::endl;
    os <<"## TradingAccountReserveFieldMessage ##" <<std::endl;
    os <<aTradingAccountReserveFieldMessage.tradingaccountreservefieldmessage_; 
    os <<"## end TradingAccountReserveFieldMessage ##" <<std::endl;
}

class InstrumentsFieldMessage : public FieldMessage
{
  public:
  InstrumentsFieldMessage(const boost::shared_array<char*>& instrus, unsigned int size):
      instrus_(instrus),
      size_(size),
      type_(INSTRUMENTSFIELDMESSAGE)
    {
    }

    virtual ~InstrumentsFieldMessage() {}

    virtual MessageType type() const
    {
      return type_;
    }

    virtual Message* toReturnMessage()
    {
      throw std::runtime_error("the type InstrumentsFieldMessage not support this function");
    }

    virtual Message* toResponseMessage()
    {
      throw std::runtime_error("the type InstrumentsFieldMessage not support this function");
    }

  boost::shared_array<char*> instrus_;
  unsigned int size_;

  private:

    MessageType type_;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, InstrumentsFieldMessage const& aInstrumentsFieldMessage)
{
    os <<std::endl;
    os <<"## InstrumentsFieldMessage ##" <<std::endl;
    for(int i=0; i<aInstrumentsFieldMessage.size_; i++)
    {
      os <<"instrument: " <<aInstrumentsFieldMessage.instrus_[i] <<std::endl;
    }
    os <<"## end InstrumentsFieldMessage ##" <<std::endl;
}
}; // namespace ctp

#endif // CTP_FIELD_MESSAGE_HH_
