#ifndef __GRAPHIC_SCENE_H_KBPFU3A46E6S__
#define __GRAPHIC_SCENE_H_KBPFU3A46E6S__

#include <map>
#include <AbstractModel.h>

///////////////////////////////////////////////////////////
/// @brief GraphicScene Основной класс сцены, в котором будут находиться 
/// все отображаемые на ui элементы
class GraphicScene
{
public:
    GraphicScene();
    ~GraphicScene(); 
    GraphicScene(const GraphicScene &other) = delete;
    GraphicScene(GraphicScene &&other) = delete;
    GraphicScene &operator=(const GraphicScene &other) = delete;
    GraphicScene &operator=(GraphicScene &&other) = delete;
    // Добавление нового элемента на сцену
    void add_new_element();

private:
    /// @brief  Хранилище для всех элементов находящихся на сцене
    std::map<int, AbstractModel> all_models;
};

#endif  // __GRAPHIC_SCENE_H_KBPFU3A46E6S__
