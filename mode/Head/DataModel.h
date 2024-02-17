#ifndef __DATA_MODEL_H_AS3KIDREOXTF__
#define __DATA_MODEL_H_AS3KIDREOXTF__

///////////////////////////////////////////////////////////
/// @brief DataModel
///
class DataModel
{
public:
    DataModel();
    virtual ~DataModel(); // TODO: Is VIRTUAL needed?
    DataModel(const DataModel &other);
    DataModel(DataModel &&other);
    DataModel &operator=(const DataModel &other);
    DataModel &operator=(DataModel &&other);

private:
    // Members
};

#endif  // __DATA_MODEL_H_AS3KIDREOXTF__
