#include <string> 

class Task
{
public:
    Task();
    Task(std::string sDescription, std::string sDate, bool bFinished = false);
    
    virtual ~Task();

protected:
    void setDescription(std::string& sDecription);
    const std::string& getDescription();

    void setDate(std::string& sDate);
    const std::string& getDate();

    void setFinished(bool bFinished);
    const bool getFinished();

private:
    std::string m_sDescription;
    std::string m_sDate;
    bool m_bFinished = false;
};
