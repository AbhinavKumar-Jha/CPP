# Write a Python program to create a class representing a shopping cart. Include methods for adding and removing items, and calculating the total price

class Item:
    def __init__(self, name, price):
        self.name = name
        self.price = price

    def __repr__(self):
        return f"{self.name}: ${self.price:.2f}"


class ShoppingCart:
    def __init__(self):
        self.items = []

    def add_item(self, item):
        self.items.append(item)
        print(f"Added {item} to the cart.")

    def remove_item(self, item_name):
        for item in self.items:
            if item.name == item_name:
                self.items.remove(item)
                print(f"Removed {item} from the cart.")
                return
        print(f"Item '{item_name}' not found.")

    def total_price(self):
        total = sum(item.price for item in self.items)
        print(f"Total price: ${total:.2f}")
        return total

    def show_cart(self):
        print("Shopping Cart:" if self.items else "The cart is empty.")
        for item in self.items:
            print(item)


# Example usage
if __name__ == "__main__":
    cart = ShoppingCart()
    cart.add_item(Item("Apple", 0.99))
    cart.add_item(Item("Banana", 0.59))
    cart.add_item(Item("Orange", 1.29))

    cart.show_cart()
    cart.total_price()
    cart.remove_item("Banana")
    cart.show_cart()
    cart.total_price()
