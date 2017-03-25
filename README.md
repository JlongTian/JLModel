# JLModel
用一个分类实现字典转模型，分类头文件如下：

```objc
@interface NSObject (Model)

/**
 返回一个模型
 @param dict 要转换的字典
 */
+ (instancetype)jl_modelWithDict:(NSDictionary *)dict;
@end
```
如果模型的属性有字典数组，想要将该字典数组转换成模型数组，那么在该模型中需要实现该方法`+ (NSDictionary *)arrayContainModelClass`，如下：

```objc
+ (NSDictionary *)arrayContainModelClass{
    
    //比如模型Staus里面有数组pic_urls，并且希望数组pic_urls里面的元素是Pic类型的模型
    //@{@"数组名字":@"数组中的模型类名"};
    return @{@"pic_urls":@"Pic"};
    
}

```
