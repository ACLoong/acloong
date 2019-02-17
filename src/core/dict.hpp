#ifndef AC_DICT_HPP
#define AC_DICT_HPP

namespace ac {

template <typename KeyType, typename ValueType>
class Node {
  Node(const KeyType *key, const ValueType &value, Node *next):
  key_(key), value_(value), next_(next) { }


  KeyType key_;
  ValueType value_;
  Node *next_;
};

class Bucket {

public:

private:
  size_t length_;
  std::shared_ptr<Node> nodes_;
};

template <typename KeyType, typename ValueType>
class Dict {
public:
  static size_t DEFAULT_BUCKETS_SIZE = 16;

  Dict()
      :bucket_size_(0),
       buckets_(nullptr){
    rehash(DEFAULT_BUCKETS_SIZE);
  }

  void put(const KeyType &key, const ValueType &value) {
    // TODO(qwang)
  }

  const ValueType &get(const KeyType &key) const {
    //TODO(qwang)
  }

private:

  void rehash(size_t target_buckets_size) {
    buckets_ = std::make_shared<Bucket>();
    //TODO(qwang)
  }

private:
  size_t bucket_size_;
  std::shared_ptr<Bucket> buckets_;
};

} // namespace ac

#endif //AC_DICT_HPP
